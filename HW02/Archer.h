// Archer.h

#pragma once
#include "Player.h"

class Archer : public Player
{
public:
    Archer(std::string nickname);

    virtual void attack() override;
    virtual void attack(Monster* monster) override;
};

