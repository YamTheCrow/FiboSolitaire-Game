#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <iostream>
using namespace std;

//implement class Deck
class Deck
{
    public:
        Deck(); // Constructor
        void refreshDeck();
        Card deal();
        void shuffle();
        bool isEmpty();
        void displayDeck();
    private:
        static const int CARDS_PER_DECK = 52;
        Card deck[CARDS_PER_DECK];
        int topCard; //hold the location of the top card
};
#endif 