// Magician.h

#pragma once
#include "Player.h"
class Magician :
    public Player
{
public:
    Magician(std::string nickname);

    virtual void attack(Actor& target) override;
};

