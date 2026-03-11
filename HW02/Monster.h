// Monster.h

#pragma once
#include <string>

class Player;

class Monster
{
public:
	Monster(std::string type);

	virtual ~Monster() {}
	void attack(Player* player);
	void printMonsterStatus() const;

	std::string getType();
	int getHP();
	int getATK();
	int getDEF();
	int getSPD();

	void setType(std::string type);
	void setHP(int hp);
	void setATK(int atk);
	void setDEF(int def);
	void setSPD(int spd);

protected:
	std::string type;
	int HP;
	int atk;
	int def;
	int spd;
};

