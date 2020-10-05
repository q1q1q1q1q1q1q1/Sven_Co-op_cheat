#pragma once

#include <Windows.h>
#include <stdint.h>


//
//Research need
//
//Its temporarily
//


class CBasePlayer
{
public:
	char pad_0000[4]; //0x0000
	class Attributs *Position; //0x0004
	char pad_0008[2116]; //0x0008
	int32_t Health; //0x084C
	int32_t Armor; //0x0850
	char pad_0854[236]; //0x0854
}; //Size: 0x0940


class Attributs
{
public:
	char pad_0000[8]; //0x0000
	float x; //0x0008
	float y; //0x000C
	float z; //0x0010
	char pad_0014[48]; //0x0014
}; //Size: 0x0044


class Weapon
{
public:
	char pad_0000[160]; //0x0000
	uint32_t ammoOnAutoPistol; //0x00A0
	char pad_00A4[160]; //0x00A4
}; //Size: 0x0144
