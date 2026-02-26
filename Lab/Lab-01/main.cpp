#include "game.h"     
#include <iostream>   
using namespace std;

int main() {

    Game game;

    // Start the game
    game.start();

    string name;
    string type;

    // Ask the player for their name
    cout << "Enter name: ";
    cin >> name;

    // Ask the player to choose an archetype
    cout << "Choose archetype (HighRoller, Lucky, SecondChance): ";
    cin >> type;

    // Set up the player with that name and archetype
    game.player.setup(name, type);

    Item itemDatabase[10] = {
        Item("LuckBoost", "This charm makes you feel confident at the table.", "luck", 1),
        Item("LuckyCoin", "This coin gives you a small advantage.", "luck", 2),
        Item("InsuranceBreak", "This item refunds part of a losing bet.", "money", 15),
        Item("HighLimitChip", "This chip adds extra funds.", "money", 25),
        Item("SecondDealToken", "This token lets you redraw one card.", "reroll", 1),
        Item("DealerDistraction", "This distraction slightly improves your next draw.", "luck", 3),
        Item("LuckySleeve", "This sleeve holds good fortune.", "luck", 1),
        Item("CashBooster", "This booster gives quick cash.", "money", 50),
        Item("SafetyStack", "This stack helps after a bad streak.", "money", 20),
        Item("OneTimeMulligan", "This mulligan allows one do-over.", "reroll", 1)
    };

    // Player gets 3 starting items to start the game, currently set to just choose 3 of your choice
    game.player.inventory.addItem(itemDatabase[0]);
    game.player.inventory.addItem(itemDatabase[2]);
    game.player.inventory.addItem(itemDatabase[4]);

    // Loop keeps running until the player types "quit"
    while (true) {

        string command;

        cout << "\nCommand (help/profile/inventory/inspect/apply/play/quit): ";
        cin >> command;

        // If the player types help
        if (command == "help") {

            cout << "help\n";
            cout << "profile\n";
            cout << "inventory\n";
            cout << "inspect <itemName>\n";
            cout << "apply <itemName>\n";
            cout << "play\n";
            cout << "quit\n";
        }

        // Show player stats
        else if (command == "profile") {

            game.player.showProfile();

            //game state variables
            cout << "Round Number: " << game.roundNumber << endl;
            cout << "Win Streak: " << game.winStreak << endl;
        }

        // Show inventory
        else if (command == "inventory") {

            game.player.inventory.display();
        }

        // Inspect an item
        else if (command == "inspect") {

            string itemName;
            cin >> itemName;

            game.inspect(itemName);
        }

        // Apply an item
        else if (command == "apply") {

            string itemName;
            cin >> itemName;

            game.apply(itemName);
        }

        // Play one blackjack round
        else if (command == "play") {

            game.playRound();
        }

        // Quit the game
        else if (command == "quit") {

            break;  // break loop
        }

        else {

            cout << "Unknown command.\n";
        }
    }

    return 0;
}