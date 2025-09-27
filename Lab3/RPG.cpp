//RPG.CPP
#include <iostream>
#include "RPG.h"
using namespace std;
#include <string>

RPG::RPG() {}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level)
{
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
    
}

bool RPG::isAlive() const
{
    if(hits_taken < MAX_HITS_TAKEN){
        return true;
    }
    else{
        return false;
    }
} 

void RPG::setHitsTaken(int new_hits)
{
    hits_taken = new_hits;
}

string RPG::getName() const
{
    return name;
}

int RPG::getHitsTaken() const
{
    return hits_taken;
}

float RPG::getLuck() const
{
    return luck;
}

float RPG::getExp() const
{
    return exp;
}

int RPG::getLevel() const
{
    return level;
}

