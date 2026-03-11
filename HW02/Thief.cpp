// Thief.cpp

#include "Thief.h"
#include "Monster.h"
#include <iostream>

Thief::Thief(std::string nickname)
	:Player(nickname)
{
	this->jobname = "도적";
	this->level = 1;
	this->HP = 50;
	this->MP = 50;
	this->atk = 30;
	this->def = 0;
	this->acc = 10;
	this->spd = 10;
	std::cout << "도적으로 전직하셧습니다." << std::endl;
}

void Thief::attack(Monster* monster)
{
	int Damage;
	int ShurikenDamage;
	int MobHP;
	Damage = this->atk - monster->getDEF();

	if (Damage <= 0)
	{
		Damage = 1;
	}

	ShurikenDamage = Damage / 5;

	if (ShurikenDamage <= 0)
	{
		ShurikenDamage = 1;
	}

	std::cout << "\n수리검 5개를 던졌습니다." << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		MobHP = monster->getHP() - ShurikenDamage;
		monster->setHP(MobHP);
		std::cout << "\n" << monster->getType() << " 에게 " << ShurikenDamage << " 만큼의 피해를 입혔습니다.\n";

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
void Thief::attack()
{
	std::cout << "\n수리검 5개를 던졌습니다." << std::endl;
}