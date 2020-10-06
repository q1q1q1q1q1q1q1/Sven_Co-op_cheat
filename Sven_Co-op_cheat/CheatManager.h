#pragma once
#include <vector>
#include <string>
#include "Cheat.h"

class CheatManager
{
private:
	std::vector<Cheat> Cheats;
	bool IsRunning = false;

public:
	void AddNewCheats(std::vector<Cheat> newCheat);
	void Start();
	void Stop();
};

