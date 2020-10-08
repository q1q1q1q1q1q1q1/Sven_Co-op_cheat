#include <Windows.h>
#include <iostream>
#include "sdk.h"
#include "MemoryFunctions.h"
#include "Cheat.h"
#include "CheatManager.h"

//Global var

std::vector<Cheat> AllCheats;
CheatManager CM;



void MainThread()
{
	
	//!Create teleport cheat;
	Cheat* teleport = new Cheat;
	teleport->SetAddressGameClass(reinterpret_cast<unsigned>(GetModuleHandle(TEXT("hw.dll"))) + 0x0570EE00, std::vector<unsigned>(0x7c))
			->SetNameCheat(L"Teleport")
			->SetKeyActivate(VK_F5);
	//!End of teleport creation;
	

	// push cheats in global array cheats;
	AllCheats.push_back(*teleport);
	//add cheats to ChetManager;
	CM.AddNewCheats(AllCheats);
	//start eventloop
	CM.Start();

	
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DllHandle = hModule;
		CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(MainThread), hModule, NULL, NULL);

	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}