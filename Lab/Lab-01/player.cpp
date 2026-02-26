#include "player.h"

// Creates player based on selected archetype
void Player::setup(string playerName, string type) {

    name = playerName;
    archetype = type;

    // Constant starter values
    const int HIGHROLLER_MONEY = 150;
    const int HIGHROLLER_LUCK = 0;
    const int HIGHROLLER_REROLLS = 0;

    const int LUCKY_MONEY = 100;
    const int LUCKY_LUCK = 2;
    const int LUCKY_REROLLS = 0;

    const int SECOND_MONEY = 100;
    const int SECOND_LUCK = 0;
    const int SECOND_REROLLS = 1;

    // Set stats based on chosen archetype
    if (type == "Lucky") {
        money = LUCKY_MONEY;
        luck = LUCKY_LUCK;
        rerolls = LUCKY_REROLLS;
    }
    else if (type == "SecondChance") {
        money = SECOND_MONEY;
        luck = SECOND_LUCK;
        rerolls = SECOND_REROLLS;
    }
    else {
        archetype = "HighRoller";
        money = HIGHROLLER_MONEY;
        luck = HIGHROLLER_LUCK;
        rerolls = HIGHROLLER_REROLLS;
    }

    wins = 0;
    losses = 0;
}

// Displays all player stats
void Player::showProfile() {
    cout << "Name: " << name << endl;
    cout << "Archetype: " << archetype << endl;
    cout << "Money: " << money << endl;
    cout << "Luck: " << luck << endl;
    cout << "Rerolls: " << rerolls << endl;
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;
}

// Applies an item to the player
void Player::applyItem(Item item) {

    if (item.traitType == "money") {
        money += item.value;
    }
    else if (item.traitType == "luck") {
        luck += item.value;
    }
    else if (item.traitType == "reroll") {
        rerolls += item.value;
    }
}