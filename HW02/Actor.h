// Actor.h

#pragma once
#include <iostream>
#include <string>

class Actor
{
protected:
    Actor(std::string jobname, int level, int hp, int mp, int atk, int def, int speed)
        : jobname(jobname), Level(level), HP(hp), MP(mp), ATK(atk), DEF(def), Speed(speed)
    {
    }

public:
    virtual void attack(Actor& target) = 0;
    virtual ~Actor() {}

    std::string getjobname();
    int getLevel();
    int getHP();
    int getMP();
    int getATK();
    int getDEF();
    int getSpeed();

    void setHP(int HP);
    void setMP(int MP);
    void setATK(int ATK);
    void setDEF(int DEF);
    void setSpeed(int Speed);

protected:
    std::string jobname;
    int Level;
    int HP;
    int MP;
    int ATK;
    int DEF;
    int Speed;
};