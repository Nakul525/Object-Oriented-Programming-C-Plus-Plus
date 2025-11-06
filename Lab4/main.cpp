// main_example.cpp
#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

int main()
{
    // Create a Game object
    GAME myGame;

    // Create num_players as an int and set it to 10
    int num_players = 10;

    //Call generatePlayers(...) with num_players as the parameter
    myGame.generatePlayers(num_players);

    // Call gameLoop()
    myGame.gameLoop();

    // Call printFinalResults()
    myGame.printFinalResults();

    return 0;
}