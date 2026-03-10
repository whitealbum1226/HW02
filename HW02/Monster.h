// Monster.h

#pragma once
#include "Actor.h"
#include <iostream>
#include <string>

class Monster : public Actor
{
protected:
    Monster(std::string name,
        std::string jobname,
        int level,
        int hp,
        int mp,
        int atk,
        int def,
        int speed)
        : Actor(jobname, level, hp, mp, atk, def, speed),
        name(name)
    {
    }

public:
    virtual ~Monster() {}
    void MonsterStatus();

    std::string getname();
    void setname(std::string name);

protected:
    std::string name;
};