// Warrior.h

#pragma once
#include "Player.h"
class Warrior :
    public Player
{
public:
    Warrior(std::string nickname);

    virtual void attack(Actor& target) override;
};