// Thief.cpp

#include "Thief.h"

Thief::Thief(std::string nickname) 
	: Player(nickname, "도적", 1200, 1000, 450, 2, 200, 200)
{
}

void Thief::attack(Actor& target)
{
	int damage = this->ATK - target.getDEF();
	if (damage <= 0)
	{
		damage = 1;
	}
	int hp = target.getHP() - damage;
	target.setHP(hp);
	std::cout << "\n" << nickname << "님이 표창을 던졋습니다.\n" << std::endl;
}