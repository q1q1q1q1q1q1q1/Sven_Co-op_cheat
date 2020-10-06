#include "Cheat.h"

void Cheat::SetNameCheat(std::wstring nameCheat)
{
	this->nameCheat = nameCheat;
}

void Cheat::SetKeyActivate(int keyActivate)
{
	this->keyActivate = keyActivate;
}

std::wstring Cheat::GetNameCheat()
{
	return this->nameCheat;
}

int Cheat::GetKeyActivate()
{
	return this->keyActivate;
}

void Cheat::SetAddressGameClass(unsigned baseAddr, std::vector<unsigned> offsets)
{
	this->addressGameClass = FindAddressByOffsets(baseAddr, offsets);
}

unsigned Cheat::GetAddressGameClass()
{
	return this->addressGameClass;
}

void Cheat::ToggleCheat()
{
	this->IsRunning ? this->IsRunning = false : this->IsRunning = true;
}
