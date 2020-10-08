#pragma once
#include <Windows.h>
#include <vector>

void CreateConsole();
unsigned FindAddressByOffsets(unsigned baseAddress, std::vector<unsigned int> offsets);

