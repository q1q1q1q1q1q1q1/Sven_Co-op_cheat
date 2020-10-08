#pragma once
#include <vector>
#include <string>
#include "MemoryFunctions.h"
#include "Cheat.h"
HMODULE DllHandle;

class CheatManager
{
private:
	void EventLoop();
	std::vector<Cheat> Cheats;
	bool IsRunning = false;
	
public:
	void AddNewCheats(std::vector<Cheat> newCheat);
	void Start();
	void Stop();
};

