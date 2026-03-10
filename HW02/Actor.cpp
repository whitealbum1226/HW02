// Actor.cpp

#include "Actor.h"

std::string Actor::getjobname()
{
	return jobname;
}
int Actor::getLevel()
{
	return Level;
}
int Actor::getHP()
{
	return HP;
}
int Actor::getMP()
{
	return MP;
}
int Actor::getATK()
{
	return ATK;
}
int Actor::getDEF()
{
	return DEF;
}
int Actor::getSpeed()
{
	return Speed;
}

void Actor::setHP(int HP)
{
	this->HP = HP;
}
void Actor::setMP(int MP)
{
	this->MP = MP;
}
void Actor::setATK(int ATK)
{
	this->ATK = ATK;
}
void Actor::setDEF(int DEF)
{
	this->DEF = DEF;
}
void Actor::setSpeed(int Speed)
{
	this->Speed = Speed;
}