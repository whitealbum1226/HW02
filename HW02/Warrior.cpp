// Warrior.cpp

#include "Warrior.h"
#include "Monster.h"
#include <iostream>

Warrior::Warrior(std::string nickname)
	:Player(nickname)
{
	this->jobname = "전사";
	this->level = 1;
	this->HP = 100;
	this->MP = 20;
	this->atk = 20;
	this->def = 25;
	this->acc = 10;
	this->spd = 5;
	std::cout << "전사로 전직하셧습니다." << std::endl;

}

void Warrior::attack(Monster* monster)
{
	int Damage;
	int MobHP;
	Damage = this->atk - monster->getDEF();
	std::cout << "\n검으로 베었습니다." << std::endl;
	
	if (Damage <= 0)
	{
		Damage = 1;
	}
	
	std::cout << "\n" << monster->getType() << " 에게 " << Damage << " 만큼의 피해를 입혔습니다.\n";
	
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
void Warrior::attack()
{
	std::cout << "\n검으로 베었습니다." << std::endl;
}