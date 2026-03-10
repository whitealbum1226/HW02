// Player.cpp

#include "Player.h"
using namespace std;

std::string Player::getnickname()
{
    return nickname;
}

int Player::getACC()
{
    return ACC;
}

void Player::setnickname(std::string nickname)
{
    this->nickname = nickname;
}

void Player::setACC(int ACC)
{
    this->ACC = ACC;
}

void Player::PlayerStatus()
{
    std::cout << "==================================" << std::endl;
    std::cout << "닉네임 : " << nickname << std::endl;
    std::cout << "직업 : " << jobname << std::endl;
    std::cout << "레벨 : " << Level << std::endl;
    std::cout << "HP : " << HP << std::endl;
    std::cout << "MP : " << MP << std::endl;
    std::cout << "ATK : " << ATK << std::endl;
    std::cout << "DEF : " << DEF << std::endl;
    std::cout << "ACC : " << ACC << std::endl;
    std::cout << "Speed : " << Speed << std::endl;
    std::cout << "==================================" << std::endl;
}