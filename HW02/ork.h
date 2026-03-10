// Ork.h

#pragma once
#include "Monster.h"

class Ork :
    public Monster
{
public:
    Ork();

    virtual void attack(Actor& target) override;
};