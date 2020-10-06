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
	void AddNewCheat(Cheat newCheat);
	void Start();
	void Stop();
};

