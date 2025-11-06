//GAME>H
#ifndef GAME_H
#define GAME_H
#include "RPG.h"
#include <vector>
#include <string>
#include <set>
using namespace std;

class GAME{
    public:
        //constructor
        GAME();
        ~GAME();
        GAME(vector<RPG*> players, set<int> live_players);

        //methods
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG *winner, RPG *loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();

    private:
        vector<RPG*> players;
        set<int> live_players;



};
#endif