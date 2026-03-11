// Goblin.h

#pragma once
#include "Monster.h"

class Goblin :
    public Monster
{
public:
    Goblin(std::string type);

    void attack(Player* player);
};

