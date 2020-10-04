#pragma once
#include <Windows.h>
#include <vector>

unsigned FindAddressByOffsets(unsigned baseAddress, std::vector<unsigned int> offsets);