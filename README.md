# Fibonacci Solitaire Game

## Overview
**Fibonacci Solitaire** is a card game where the player draws cards from a shuffled deck and attempts to reach Fibonacci numbers. If the player reaches a Fibonacci number, they win; otherwise, they lose. Try to reach the end of the deck! The game tracks the number of games played and the number of piles created during gameplay.

The game provides a menu with options to create a new deck, display the current deck, shuffle the deck, or play the game. The player can also choose to exit the game.

---

## Features
- **New Deck**: Allows the player to create a fresh deck of cards.
- **Display Deck**: Displays the current deck of cards.
- **Shuffle Deck**: Shuffles the deck for a new game.
- **Play Solitaire**: The main game mode, where the player draws cards and tries to reach Fibonacci numbers.
- **Exit**: Exits the program.

---

## Requirements
To compile and run this program, the following files should be in the same directory:
- `Card.h`
- `Card.cpp`
- `Deck.h`
- `Deck.cpp`
- `FiboSolitaire.cpp`

You will need to use a C++ compiler to compile the program.

---

## Compilation Instructions
To compile the program, use the following command:

```bash
g++ FiboSolitaire.cpp Card.cpp Deck.cpp -o FiboSolitaire
```

---

## Running the Program
Once compiled, run the program using the following command:

```bash
./FiboSolitaire
```

---

## Gameplay Instructions
Upon running the program, the player is presented with a menu offering the following options:

1. **New Deck**: Resets and creates a new deck of cards.
2. **Display Deck**: Displays the current deck of cards.
3. **Shuffle Deck**: Shuffles the cards in the deck.
4. **Play Solitaire**: Starts a game of Fibonacci Solitaire. The player draws cards from the deck, and the goal is to reach Fibonacci numbers by summing the card values. The game continues until the deck is empty or a Fibonacci number is reached.
5. **Exit**: Exits the program.

---

## Game Rules
- The player draws cards from the deck, and their values are added up.
- If the sum of the card values reaches a Fibonacci number (e.g., 1, 2, 3, 5, 8, 13, 21, 34...), the player wins that round.
- If the deck runs out of cards without reaching a Fibonacci number, the player loses that round.
- The game keeps track of the number of piles (rounds) played.

---

## Code Overview
- **Card Class**: Represents individual cards with methods like `getValue()` to retrieve card values.
- **Deck Class**: Manages the deck of cards with methods such as `refreshDeck()`, `displayDeck()`, `shuffle()`, `deal()`, and `isEmpty()`.
- **Main Program**: Manages the menu system, tracks the number of games played, and handles the game logic for checking Fibonacci numbers and dealing cards.

---

## License
This program is free for personal use and educational purposes.
