// Warrior.h

#pragma once
#include "Player.h"

class Warrior : public Player
{
public:
    Warrior(std::string nickname);

    virtual void attack() override;
    virtual void attack(Monster* monster) override;
};

