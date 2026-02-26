#ifndef GAME_H
#define GAME_H

#include "player.h"   
#include <string>     
using namespace std;

class Game {
public:
    Player player;      //allow use of Player

    int roundNumber;
    int winStreak;

    void start();
    int drawCard();

    void inspect(string itemName);
    void apply(string itemName);

    void playRound();  
};

#endif