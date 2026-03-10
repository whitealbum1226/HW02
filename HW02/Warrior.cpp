// Warrior.cpp

#include "Warrior.h"

Warrior::Warrior(std::string nickname)
	: Player(nickname, "전사", 2000, 200, 400, 10, 100, 100)
{
}

void Warrior::attack(Actor& target)
{
	int damage = this->ATK - target.getDEF();
	if (damage <= 0)
	{
		damage = 1;
	}
	int hp = target.getHP() - damage;
	target.setHP(hp);
	
	std::cout << "\n" << nickname << "님이 검을 휘둘러 공격하였습니다.\n" << std::endl;
}