#include "CheatFunctions.h"
#include "sdk.h"

BOOL teleport::savePosition(unsigned addressPlayerClass)
{
	CBasePlayer* Player = reinterpret_cast<CBasePlayer*>(addressPlayerClass);
	x = Player->Position->x;
	y = Player->Position->y;
	z = Player->Position->z;
	if (x == 0 && y == 0 && z == 0) return false;
	else return true;
}

BOOL teleport::setPosition(unsigned addressPlayerClass)
{
	if (x == 0 && y == 0 && z == 0) return false;
	CBasePlayer* Player = reinterpret_cast<CBasePlayer*>(addressPlayerClass);
	Player->Position->x = x;
	Player->Position->y = y;
	Player->Position->z = z;
	return true;
}
