#pragma once


#include <Windows.h>
#include <stdint.h>


//
//Research need
//
//Its temporarily
//
class LocalPlayer
{
public:
	char pad_0000[4]; //0x0000
	class Attributs *Coordinates; //0x0004
	char pad_0008[2116]; //0x0008
	uint32_t Health; //0x084C
	char pad_0850[28]; //0x0850
}; //Size: 0x086C


class Attributs
{
public:
	char pad_0000[8]; //0x0000
	float x; //0x0008
	float y; //0x000C
	float z; //0x0010
	char pad_0014[12]; //0x0014
	uint8_t SomeVarForAcceleration1; //0x0020
	uint8_t SomeVarForAcceleration2; //0x0021
	uint8_t SomeVarForAcceleration3; //0x0022
	uint8_t SomeVarForAcceleration4; //0x0023
	uint8_t SomeVarForAcceleration5; //0x0024
	uint8_t SomeVarForAcceleration6; //0x0025
	uint8_t SomeVarForAcceleration7; //0x0026
	uint8_t SomeVarForAcceleration8; //0x0027
	char pad_0028[28]; //0x0028
}; //Size: 0x0044

