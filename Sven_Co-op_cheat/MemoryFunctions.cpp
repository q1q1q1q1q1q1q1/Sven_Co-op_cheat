#include "MemoryFunctions.h"

unsigned FindAddressByOffsets(unsigned baseAddress, std::vector<unsigned int> offsets)
{
	unsigned resultAddress = baseAddress;
	for (auto offset : offsets) {
		resultAddress = *reinterpret_cast<unsigned*>(resultAddress);
		resultAddress += offset;
	};
	return *reinterpret_cast<unsigned*>(resultAddress);
}


void CreateConsole()
{
	AllocConsole();
	FILE *f;
	freopen_s(&f, "CONOUT$", "w", stdout);
}