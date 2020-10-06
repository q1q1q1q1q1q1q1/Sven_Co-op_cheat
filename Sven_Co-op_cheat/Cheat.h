#pragma once
#include <string>
#include <Windows.h>
#include <vector>
#include "MemoryFunctions.h"

class Cheat
{
private:
	
	std::wstring nameCheat;
	int keyActivate;
	bool IsRunning = false;
	unsigned addressGameClass;
	

public:
	Cheat* SetNameCheat(std::wstring nameCheat);
	Cheat* SetKeyActivate(int keyActivate);
	std::wstring GetNameCheat();
	int GetKeyActivate();
	Cheat* SetAddressGameClass(unsigned baseAddr, std::vector<unsigned> offsets);
	unsigned GetAddressGameClass();
	void ToggleCheat();
};

