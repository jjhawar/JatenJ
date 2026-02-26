#ifndef INVENTORY_H
#define INVENTORY_H

#include "item.h"
#include <iostream>
using namespace std;

class Inventory {
private:
    static const int CAPACITY = 5; // Inventory capacity
    Item items[CAPACITY]; // Array of Item objects
    int count; // Number of items currently stored

public:
    Inventory(); 

    bool addItem(Item item); // Adds an item
    bool removeItem(string itemName); // Removes item by name
    int findItem(string itemName); // Finds item
    Item getItemAt(int index); // Returns item at position
    void display(); // Shows inventory
};

#endif