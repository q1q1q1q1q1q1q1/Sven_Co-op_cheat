#pragma once

#include "CheatManager.h"

namespace teleport {
	float x = 0;
	float y = 0;
	float z = 0;
	BOOL savePosition(unsigned addressPlayerClass);
	BOOL setPosition(unsigned addressPlayerClass);
}