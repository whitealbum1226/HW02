// Player.cpp

#include "Player.h"
#include <iostream>
#include <string>

Player::Player(std::string nickname)
{
}

std::string Player::getJobName()
{
	return jobname;
}
std::string Player::getNickName()
{
	return nickname;
}
int Player::getLevel()
{
	return level;
}
int Player::getHP()
{
	return HP;
}
int Player::getMP()
{
	return MP;
}
int Player::getATK()
{
	return atk;
}
int Player::getDEF()
{
	return def;
}
int Player::getACC()
{
	return acc;
}
int Player::getSPD()
{
	return spd;
}

void Player::setNickName(std::string nickname)
{
	this->nickname = nickname;
}
void Player::setHP(int hp)
{
	this->HP = hp;
}
void Player::setMP(int mp)
{
	this->MP = mp;
}
void Player::setATK(int atk)
{
	this->atk = atk;
}
void Player::setDEF(int def)
{
	this->def = def;
}
void Player::setACC(int acc)
{
	this->acc = acc;
}
void Player::setSPD(int spd)
{
	this->spd = spd;
}

void Player::printPlayerStatus() const
{
	std::cout << "" << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << "* 현재 능력치" << std::endl;
	std::cout << "직업: " << jobname << std::endl;
	std::cout << "닉네임: " << nickname << std::endl;
	std::cout << "Lv. " << level << std::endl;
	std::cout << "HP: " << HP << std::endl;
	std::cout << "MP: " << MP << std::endl;
	std::cout << "공격력: " << atk << std::endl;
	std::cout << "방어력: " << def << std::endl;
	std::cout << "정확도: " << acc << std::endl;
	std::cout << "속도: " << spd << std::endl;
	std::cout << "==========================" << std::endl;
}