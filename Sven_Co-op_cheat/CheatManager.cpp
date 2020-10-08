#include "CheatManager.h"


void CheatManager::EventLoop()
{
	while (true) {

	}
}

void CheatManager::AddNewCheats(std::vector<Cheat> allCheats)
{
	this->Cheats = allCheats;
}

void CheatManager::Start()
{
	this->IsRunning = true;
	EventLoop();
	FreeConsole();
	FreeLibraryAndExitThread(DllHandle, 0);
}

void CheatManager::Stop()
{
	this->IsRunning = false;
}

