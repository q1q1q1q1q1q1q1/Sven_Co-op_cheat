#include "CheatManager.h"

void CheatManager::AddNewCheat(Cheat newCheat)
{
	this->Cheats.push_back(newCheat);
}

void CheatManager::Start()
{
	this->IsRunning = true;
}

void CheatManager::Stop()
{
	this->IsRunning = false;
}
