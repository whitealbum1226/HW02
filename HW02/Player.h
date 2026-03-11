// Player.h

#pragma once
#include <string>

class Monster;

class Player
{
public:
	Player(std::string nickname);

	virtual ~Player() {}
	virtual void attack() = 0;
	virtual void attack(Monster* monster) = 0;
	void printPlayerStatus() const;

	std::string getJobName();
	std::string getNickName();
	int getLevel();
	int getHP();
	int getMP();
	int getATK();
	int getDEF();
	int getACC();
	int getSPD();

	void setNickName(std::string nickname);
	void setLevel(int lvl);
	void setHP(int HP);
	void setMP(int MP);
	void setATK(int atk);
	void setDEF(int def);
	void setACC(int acc);
	void setSPD(int spd);

protected:
	std::string jobname;
	std::string nickname;
	int level;
	int HP;
	int MP;
	int atk;
	int def;
	int acc;
	int spd;
};