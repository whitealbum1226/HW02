// Archer.cpp

#include "Archer.h"
#include "Monster.h"
#include <iostream>

Archer::Archer(std::string nickname)
	:Player(nickname)
{
	this->jobname = "궁수";
	this->level = 1;
	this->HP = 50;
	this->MP = 50;
	this->atk = 30;
	this->def = 5;
	this->acc = 20;
	this->spd = 15;
	std::cout << "궁수로 전직하셧습니다." << std::endl;

}

void Archer::attack(Monster* monster)
{
	int Damage;
	int ArrowDamage;
	int MobHP;
	Damage = this->atk - monster->getDEF();
	
	if (Damage <= 0)
	{
		Damage = 1;
	}

	ArrowDamage = Damage / 3;

	if (ArrowDamage <= 0)
	{
		ArrowDamage = 1;
	}

	std::cout << "\n화살 3개를 쏘았습니다." << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		MobHP = monster->getHP() - ArrowDamage;
		monster->setHP(MobHP);
		std::cout << "\n" << monster->getType() << " 에게 " << ArrowDamage << " 만큼의 피해를 입혔습니다.\n";

		if (MobHP <= 0)
		{
			monster->setHP(0);
			std::cout << "\n" << monster->getType() << " 을/를 처지했습니다.\n" << std::endl;
			break;
		}

	}
	
	if (monster->getHP() > 0)
	{
		monster->printMonsterStatus();
	}
}
void Archer::attack()
{
	std::cout << "\n화살 3개를 쏘았습니다." << std::endl;
}