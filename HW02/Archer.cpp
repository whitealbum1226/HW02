// Archer.cpp

#include "Archer.h"

Archer::Archer(std::string nickname)
	: Player(nickname, "±Ã¼ö", 1200, 1000, 500, 1, 300, 200)
{
}

void Archer::attack(Actor& target)
{
	int damage = this->ATK - target.getDEF();
	if (damage <= 0)
	{
		damage = 1;
	}
	int hp = target.getHP() - damage;
	target.setHP(hp);
	std::cout << "\n" << nickname << "´ÔÀÌ È° ½ÃÀ§¸¦ ´ç°ä½À´Ï´Ù.\n" << std::endl;
}