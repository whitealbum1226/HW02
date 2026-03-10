// Thief.h

#pragma once
#include "Player.h"
class Thief :
    public Player
{
public:
    Thief(std::string nickname);

    virtual void attack(Actor& target) override;
};

