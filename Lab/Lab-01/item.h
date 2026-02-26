#ifndef ITEM_H     
#define ITEM_H

#include <string>  
using namespace std;

class Item {
public:
    string name;
    string description;
    string traitType; // This can be "money", "luck", or "reroll"
    int value; // How much it increases that stat

    // Default constructor
    Item();

    // Updated constructor
    Item(string n, string d, string t, int v);
};

#endif