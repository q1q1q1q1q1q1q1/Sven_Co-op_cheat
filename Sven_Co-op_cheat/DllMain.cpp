#include <Windows.h>
#include <iostream>

HMODULE DllHandle;


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

	




	while (!GetAsyncKeyState(VK_F5))
	{
		if (GetAsyncKeyState(VK_F6) & 1) {

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