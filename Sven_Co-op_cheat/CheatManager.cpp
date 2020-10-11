#include "CheatManager.h"


void CheatManager::EventLoop()
{
	while (this->IsRunning) {
		for (auto cheat : this->Cheats) 
		{
			if (GetAsyncKeyState(cheat.GetKeyActivate) & 1) cheat.ToggleCheat(); 

			if (cheat.IsRunning) teleport::savePosition(cheat.addressGameClass);
			if (GetAsyncKeyState(VK_F6) & 1) teleport::setPosition(cheat.addressGameClass);
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

