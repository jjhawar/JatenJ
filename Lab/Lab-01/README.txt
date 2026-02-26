Blackjack Game Foundation

Author: Jaten Jhawar

This project is a simple text-based blackjack game built as a foundation system. The goal of this assignment is to design a clean structure using classes, functions, arrays, and loops.

The program uses multiple files to separate responsibilities. The Item class represents items with a name, description, trait type, and numeric value. The Inventory class stores Item objects in an array with a fixed capacity and includes functions to add, remove, find, and display items. The Player class stores player attributes such as money, luck, rerolls, wins, and losses, and applies item effects through a function. The Game class controls the main gameplay logic, including drawing cards, handling bets, tracking round number, and tracking win streak.

The player selects an archetype at the beginning, which sets starting stats using constant values. The inventory contains up to 5 items, and there are 10 total items defined in the program. Each item affects exactly one numeric stat (money, luck, or reroll).

The game runs in a loop until the user types “quit”. The required commands are implemented, including help, profile, inventory, inspect, apply, play, and quit. The inspect command shows item details, and the apply command updates player stats and removes the item from inventory.

The blackjack cards are random numbers from 1–10, and the dealer draws until reaching 17. The game tracks roundNumber and winStreak as required game state variables that change during play.
