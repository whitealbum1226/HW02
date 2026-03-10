// Ork.cpp

#include "ork.h"

Ork::Ork()
	: Monster("오크", "오크 전사", 13, 5000, 0, 20, 60, 50)
{
}

void Ork::attack(Actor& target)
{
	int damage = this->ATK - target.getDEF();
	if (damage <= 0)
	{
		damage = 1;
	}
	int hp = target.getHP() - damage;
	target.setHP(hp);
	std::cout << "\n오크 전사의 몽둥이 휘두르기 강타!\n" << std::endl;

}