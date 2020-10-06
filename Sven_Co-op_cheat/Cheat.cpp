#include "Cheat.h"

Cheat* Cheat::SetNameCheat(std::wstring nameCheat)
{
	this->nameCheat = nameCheat;
	return this;
}

Cheat* Cheat::SetKeyActivate(int keyActivate)
{
	this->keyActivate = keyActivate;
	return this;
}

std::wstring Cheat::GetNameCheat()
{
	return this->nameCheat;
}

int Cheat::GetKeyActivate()
{
	return this->keyActivate;
}

Cheat* Cheat::SetAddressGameClass(unsigned baseAddr, std::vector<unsigned> offsets)
{
	this->addressGameClass = FindAddressByOffsets(baseAddr, offsets);
	return this;
}

unsigned Cheat::GetAddressGameClass()
{
	return this->addressGameClass;
}

void Cheat::ToggleCheat()
{
	this->IsRunning ? this->IsRunning = false : this->IsRunning = true;
}
