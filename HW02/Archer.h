// Archer.h

#pragma once
#include "Player.h"
class Archer :
    public Player
{
public:
    Archer(std::string nickname);

    virtual void attack(Actor& target);
};

