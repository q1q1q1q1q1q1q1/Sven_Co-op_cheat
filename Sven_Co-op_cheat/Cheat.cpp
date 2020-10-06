#include "Cheat.h"

void Cheat::SetNameCheat(std::wstring nameCheat)
{
	this->nameCheat = nameCheat;
}

void Cheat::SetKeyActivate(std::wstring keyActivate)
{
	this->keyActivate = keyActivate;
}

std::wstring Cheat::GetNameCheat()
{
	return this->nameCheat;
}

std::wstring Cheat::GetKeyActivate()
{
	return this->keyActivate;
}
