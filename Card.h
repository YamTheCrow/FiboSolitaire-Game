#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;

static const int MAX_SUITS = 4;
static const int MAX_RANKS = 13;
const char suits[MAX_SUITS] = {'S', 'H', 'D', 'C'};
const char ranks[MAX_RANKS] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q','K'};
class Card
{
    public: 
        Card();
        Card(char r, char s );
        void setCard(char r, char s);
        int getValue();
        void displayCard();
    private:
        int value;
        char rank;
        char suit;
};

#endif 