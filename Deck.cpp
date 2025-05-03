#include "Deck.h"
#include "Card.h"
// constructor which creates a deck of 52 cards. Ace of Spades on top, followed by the
//rest of the spades in order, followed by Hearts, Diamonds and Clubs.
Deck::Deck( ) 
{
    topCard = 0;
    for(int i = 0; i < MAX_SUITS; i++)
    {
        for(int j = 0; j < MAX_RANKS; j++)
        {
            deck[(i * MAX_RANKS) + j] = Card(ranks[j], suits[i]);
        }
    }
}
void Deck::refreshDeck() // reset the deck so it looks like a new deck
{
    topCard = 0;
    for(int i = 0; i < MAX_SUITS; i++)
    {
        for(int j = 0; j < MAX_RANKS; j++)
        {
            deck[(i * MAX_RANKS) + j] = Card(ranks[j], suits[i]);
        }
    }
}

Card Deck::deal() // deal a card from the top of the deck.
{
    Card hand = deck[topCard];
    topCard++;
    hand.displayCard();
    return hand;
}
void Deck::shuffle() // shuffle the cards in the deck.
{
    topCard = 0;
    for (int i = 0; i < CARDS_PER_DECK; i++)
    {
        int t = i + (rand() % (52-i)); 
        Card temp = deck[i];
        deck[i] = deck[t]; 
        deck[t] = temp;
    }
    
}
bool Deck::isEmpty( ) // true if deck is empty, false if the deck is not empty
{
    return topCard > 51;
}

void Deck::displayDeck() // show all the cards in the deck: 13 columns and 4 rows.
{
    for (int i = 0; i < CARDS_PER_DECK; i++) 
    {
        deck[i].displayCard();
        if ((i+1)% MAX_RANKS == 0)
        {
            cout << endl;
        }
    }
}
