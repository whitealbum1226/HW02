// Goblin.cpp

#include "Goblin.h"

Goblin::Goblin(std::string type)
	:Monster(type)
{
	this->HP = 40;
	this->atk = 10;
	this->def = 2;
	this->spd = 5;
}