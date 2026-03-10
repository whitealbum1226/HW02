// Player.h

#pragma once
#include "Actor.h"
#include <iostream>
#include <string>

class Player : public Actor
{
protected:
    Player(std::string nickname,
        std::string job,
        int hp,
        int mp,
        int atk,
        int def,
        int acc,
        int speed)
        : Actor(job, 1, hp, mp, atk, def, speed),
        nickname(nickname),
        ACC(acc)
    {
    }

public:
    virtual void attack(Actor& target) = 0;
    virtual ~Player() {}
    void PlayerStatus();

    std::string getnickname();
    int getACC();

    void setnickname(std::string nickname);
    void setACC(int ACC);

protected:
    std::string nickname;
    int ACC;
};