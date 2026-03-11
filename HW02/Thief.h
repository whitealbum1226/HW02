// Thief.h

#pragma once
#include "Player.h"

class Thief :
    public Player
{
public:
    Thief(std::string nickname);

    virtual void attack() override;
    virtual void attack(Monster* monster) override;
};

