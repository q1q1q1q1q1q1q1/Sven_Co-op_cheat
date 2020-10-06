#pragma once
#include <string>
#include <Windows.h>

class Cheat
{
private:
	std::wstring nameCheat;
	std::wstring keyActivate;
	bool IsRunning = false;
	

public:
	void SetNameCheat(std::wstring nameCheat);
	void SetKeyActivate(std::wstring keyActivate);
	std::wstring GetNameCheat();
	std::wstring GetKeyActivate();
};

