// Magician.cpp

#include "Magician.h"
#include "Monster.h"
#include <iostream>

Magician::Magician(std::string nickname)
	:Player(nickname)
{
	this->jobname = "마법사";
	this->level = 1;
	this->HP = 20;
	this->MP = 80;
	this->atk = 40;
	this->def = 0;
	this->acc = 10;
	this->spd = 4;
	std::cout << "마법사로 전직하셧습니다." << std::endl;
}

void Magician::attack(Monster* monster)
{
	int Damage;
	int MobHP;
	Damage = this->atk - monster->getDEF();
	std::cout << "\n파이어볼을 날렸습니다." << std::endl;

	if (Damage <= 0)
	{
		Damage = 1;
	}

	std::cout << monster->getType() << " 에게 " << Damage << " 만큼의 피해를 입혔습니다.\n";

	MobHP = monster->getHP() - Damage;

	if (MobHP <= 0)
	{
		monster->setHP(0);
		std::cout << "\n" << monster->getType() << " 을/를 처지했습니다.\n" << std::endl;
	}
	else
	{
		monster->setHP(MobHP);
		monster->printMonsterStatus();
	}
}
void Magician::attack()
{
	std::cout << "\n파이어볼을 날렸습니다." << std::endl;
}