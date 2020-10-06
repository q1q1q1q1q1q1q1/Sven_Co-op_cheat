#include "CheatManager.h"

void CheatManager::AddNewCheats(std::vector<Cheat> allCheats)
{
	this->Cheats = allCheats;
}

void CheatManager::Start()
{
	this->IsRunning = true;
}

void CheatManager::Stop()
{
	this->IsRunning = false;
}
