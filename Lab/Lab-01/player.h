#ifndef PLAYER_H
#define PLAYER_H

#include "inventory.h"
#include <iostream>
using namespace std;

// Stores all information about the player
class Player {
public:
    string name;
    string archetype;

    int money;
    int luck;
    int rerolls;
    int wins;
    int losses;

    Inventory inventory; 

    void setup(string playerName, string type);
    void showProfile();
    void applyItem(Item item);
};

#endif