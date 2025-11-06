//RPG.CPP
#include <iostream>
#include "RPG.h"
using namespace std;
#include <string>

RPG::RPG() {
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;

}

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






/*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*EXTENDED FUNCTION\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*\*/
/**
* @brief updates name
*
* @param name
*/
void RPG::setName(string name) {
    this->name = name;
}


/**
* @brief increase RPG's experience by 50
* After updating, if RPG's experience is >= 100.0, increase
* RPG's level by 1, reset their experience to 0, and increase
* their luck by 0.1
*/
void RPG::updateExpLevel() {
    exp += 50.0;
    if (exp >= 100.0){
        level += 1;
        exp = 0.0;
        luck += 0.1;
    }
}


/**
 * @brief Hits or misses the opponent at random. Luck is a form of defense.
 * The higher the opponent's luck, the more likely the attack will miss.
 * If the attack is a hit, opponent's hits taken should increment by 1.
 * Add last couple of lines to complete
 *
 * @param opponent: RPG *
 */
void RPG::attack(RPG * opponent){

    random_device rd;
    mt19937 gen(rd()); // seed with random
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);

    //Create a bool called hit
    // hit is true if random_num > HIT_FACTOR * opponent's luck
    bool hit = random_num > (HIT_FACTOR * opponent->getLuck());

    //if hit is true, call updateHitsTaken() to increase opponent's hits_taken
    if (hit == true){
        int current_hits = opponent->getHitsTaken();
        opponent->setHitsTaken(current_hits + 1);
    }

}

/**
 * @brief Prints in the format:
 * "Name: NPC_X Hits Taken: X Luck: 0.X00000 Exp: X0.00000 Level: X Status: Alive or Dead"
 */
void RPG::printStats() {
    string status;
    if (isAlive()){
        status = "Alive";
    }
    else{
        status = "Dead";
    }

    printf("Name: %s \t Hits Taken: %d \tLuck: %.5f \tExp: %.5f \tLevel: %d \tStatus: %s\n",
           name.c_str(), hits_taken, luck, exp, level, status.c_str());
}

/**
 * @brief Destroy the RPG::RPG object
 * Already completed
 */
RPG::~RPG()
{
}