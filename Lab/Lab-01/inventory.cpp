#include "inventory.h"

// Empty inventory when starting
Inventory::Inventory() {
    count = 0;
}

// Adds item to inventory
bool Inventory::addItem(Item item) {

    // Full Inventory
    if (count >= CAPACITY) {
        cout << "Inventory full.\n";
        return false;
    }

    // Input into array
    items[count] = item;
    count++;

    return true;
}

// Find an item by its name
int Inventory::findItem(string itemName) {
    for (int i = 0; i < count; i++) {

        // If item is found, return the name
        if (items[i].name == itemName) {
            return i;
        }
    }

    return -1; // -1 means not found
}

// Return item at a certain position in the array
Item Inventory::getItemAt(int index) {
    return items[index];
}

// Remove item from inventory
bool Inventory::removeItem(string itemName) {

    int index = findItem(itemName);

    if (index == -1) {
        return false; // Item not found
    }

    // After Item is removed, shift everything left
    for (int i = index; i < count - 1; i++) {
        items[i] = items[i + 1];
    }

    count--;
    return true;
}

// Display all items
void Inventory::display() {

    if (count == 0) {
        cout << "Inventory empty.\n";
        return;
    }

    cout << "Inventory:\n";
    for (int i = 0; i < count; i++) {
        cout << "- " << items[i].name << endl;
    }
}