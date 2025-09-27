//main.cpp
#include <iostream>
#include "RPG.h"
using namespace std;

int main()
{
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();
    
    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());

    // PRINT the same for p2
    printf("%s Current Stats\n", p2.getName().c_str());
    
    // CALL setHitsTaken(new_hit) on either p1 or p2
    p1.setHitsTaken(1);

    
    cout << "\n p2 hits taken ";
    // PRINT out the hits_taken
    cout << p1.getHitsTaken() << endl;
    
    cout << "0 is dead, 1 is alive\n";
    // CALL isAlive() on both p1 and p2
    cout << p1.isAlive() << endl;
    cout << p2.isAlive() << endl;

    return 0;
}