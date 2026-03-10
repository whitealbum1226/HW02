// Magician.cpp

#include "Magician.h"

Magician::Magician(std::string nickname)
	: Player(nickname, "마법사", 200, 2000, 600, 1, 200, 100)
{
}

void Magician::attack(Actor& target)
{
	int damage = this->ATK - target.getDEF();
	if (damage <= 0)
	{
		damage = 1;
	}
	int hp = target.getHP() - damage;
	target.setHP(hp);
	std::cout << "\n" << nickname << "님이 파이어볼 주문을 외웠습니다..\n" << std::endl;
}
