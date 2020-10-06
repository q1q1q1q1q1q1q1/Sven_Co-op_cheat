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
	void SetNameCheat(std::wstring nameCheat);
	void SetKeyActivate(int keyActivate);
	std::wstring GetNameCheat();
	int GetKeyActivate();
	void SetAddressGameClass(unsigned baseAddr, std::vector<unsigned> offsets);
	unsigned GetAddressGameClass();
	void ToggleCheat();
};

