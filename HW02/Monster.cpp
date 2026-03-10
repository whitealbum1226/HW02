// Monster.cpp

#include "Monster.h"

using namespace std;

std::string Monster::getname()
{
	return name;
}


void Monster::setname(std::string name)
{
	this->name = name;
}


void Monster::MonsterStatus()
{
	std::cout << "==================================" << std::endl;
	std::cout << "종족 : " << name << std::endl;
	std::cout << "직업 : " << jobname << std::endl;
	std::cout << "레벨 : " << Level << std::endl;
	std::cout << "HP : " << HP << std::endl;
	std::cout << "MP : " << MP << std::endl;
	std::cout << "ATK : " << ATK << std::endl;
	std::cout << "DEF : " << DEF << std::endl;
	std::cout << "Speed : " << Speed << std::endl;
	std::cout << "==================================" << std::endl;
}