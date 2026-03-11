// Monster.cpp

#include "Monster.h"
#include "Player.h"
#include <iostream>

Monster::Monster(std::string type)
{
	this->type = type;
	this->HP = 10;
	this->atk = 30;
	this->def = 10;
	this->spd = 10;
}

void Monster::attack(Player* player)
{
	int Damage;
	int PlayerHP;
	Damage = atk - player->getDEF();
	if (Damage <= 0)
	{
		Damage = 1;
	}
	PlayerHP = player->getHP() - Damage;
	std::cout << Damage << " 만큼의 피해를 입었습니다.";
	
	if (PlayerHP <= 0)
	{
		player->setHP(0);
	}
	else
	{
		player->setHP(PlayerHP);
		player->printPlayerStatus();
	}
}

std::string Monster::getType()
{
	return type;
}
int Monster::getHP()
{
	return HP;
}
int Monster::getATK()
{
	return atk;
}
int Monster::getDEF()
{
	return def;
}
int Monster::getSPD()
{
	return spd;
}

void Monster::setType(std::string type)
{
	this->type = type;
}
void Monster::setHP(int hp)
{
	this->HP = hp;
}
void Monster::setATK(int atk)
{
	this->atk = atk;
}
void Monster::setDEF(int def)
{
	this->def = def;
}
void Monster::setSPD(int spd)
{
	this->spd = spd;
}

void Monster::printMonsterStatus() const
{
	std::cout << "==========================" << std::endl;
	std::cout << "타입: " << type << std::endl;
	std::cout << "HP: " << HP << std::endl;
	std::cout << "공격력: " << atk << std::endl;
	std::cout << "방어력: " << def << std::endl;
	std::cout << "속도: " << spd << std::endl;
	std::cout << "==========================" << std::endl;
}