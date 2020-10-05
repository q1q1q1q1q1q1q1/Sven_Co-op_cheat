#include <Windows.h>
#include <iostream>
#include "sdk.h"
#include "MemoryFunctions.h"

HMODULE DllHandle;

std::vector<unsigned> offsetssToPlayerClass = { 0x7c };


void CreateConsole()
{
	AllocConsole();
	FILE *f;
	freopen_s(&f, "CONOUT$", "w", stdout);
}


void Inject()
{
	CreateConsole();
	std::cout << "injected" << '\n';
	unsigned baseAddress = reinterpret_cast<unsigned>(GetModuleHandle(TEXT("hw.dll"))) + 0x0570EE00;

	std::cout << baseAddress << '\n';
	CBasePlayer* Player = reinterpret_cast<CBasePlayer*>(FindAddressByOffsets(baseAddress, offsetssToPlayerClass));
	std::cout << Player << '\n';


	while (!GetAsyncKeyState(VK_F5))
	{

		if (GetAsyncKeyState(VK_F6) & 1) {
			std::cout << Player->Position->y << '\n';
			std::cout << Player->Position->x << '\n';
			std::cout << Player->Position->z << '\n';
			std::cout << Player->Health << '\n';
			std::cout << Player->Armor << '\n';

		}
	}

	std::cout << "Uninjected" << '\n';
	FreeConsole();
	FreeLibraryAndExitThread(DllHandle, 0);
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DllHandle = hModule;
		CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(Inject), hModule, NULL, NULL);

	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}