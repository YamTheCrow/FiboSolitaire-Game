#include "Card.h"

Card::Card( ) // create a “default” card
{
    suit = 'S';
    rank = 'A';
}
Card::Card( char r, char s ) // constructor to create a card, setting the rank and suit
{
    suit = s;
    rank = r;
}

void Card::setCard( char r, char s) //set existing card to new values
{
    suit = s;
    rank = r;
}
int Card::getValue( ) // return the point value of the card. Ace = 1, 2 thru 10, 
//Jack = 10, Queen = 10,King = 10
{
    if(rank == 'A')
    {
        value = 1;
    }
    else if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T')
    {
        value = 10;
    }
    else
    {
        value = rank - '0';
    }
        
    return value;
}

void Card::displayCard( ) // display the card using 2 fields... Ace of Spade:AS, Ten of Diamond:10D,
//Queen of Heart:QH, Three of Club:3C
{
    if(rank == 'T')
    {
        cout << "10" << suit << " ";
    }
    else
    {
        cout << rank << suit << " ";
    }
}