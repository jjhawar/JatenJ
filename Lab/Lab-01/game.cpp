#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Initialize game state variables
void Game::start() {
    srand(time(0));  // Seed random number generator
    roundNumber = 0;
    winStreak = 0;
}

// Generate a random card between 1 and 10
int Game::drawCard() {
    return rand() % 10 + 1;
}

void Game::playRound() {
    roundNumber++;
    cout << "Playing round " << roundNumber << "...\n";
}
// Inspect an item
void Game::inspect(string itemName) {

    int index = player.inventory.findItem(itemName);

    if (index == -1) {
        cout << "That item is not in your inventory.\n";
        return;
    }

    Item item = player.inventory.getItemAt(index);

    cout << "Item: " << item.name << endl;
    cout << item.description << endl;
    cout << "Trait: " << item.traitType 
         << " +" << item.value << endl;
}

// Apply item effect
void Game::apply(string itemName) {

    int index = player.inventory.findItem(itemName);

    if (index == -1) {
        cout << "That item is not in your inventory.\n";
        return;
    }

    Item item = player.inventory.getItemAt(index);

    // Apply stat change
    player.applyItem(item);

    // Remove item after use
    player.inventory.removeItem(itemName);

    cout << "Applied " << item.name << "!\n";
}