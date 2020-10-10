#include "CheatManager.h"


void CheatManager::EventLoop()
{
	while (this->IsRunning) {
		for (auto cheat : this->Cheats) 
		{
			if (GetAsyncKeyState(cheat.GetKeyActivate)) cheat.ToggleCheat();
		}
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
}

void CheatManager::Stop()
{
	this->IsRunning = false;
}

