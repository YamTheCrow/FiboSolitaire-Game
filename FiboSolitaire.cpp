//Yasmine Valencia
//Solitair Fibonacci

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "Deck.h"
#include "Card.h"

int userChoice; //to hold menu choice
int plays; //to count how many times the user played
Deck myDeck;
int pileSum;
int piles;

void displayMenu()
{
    //Display menu and get a choice
    cout << "\n\t\tWelcome to the Fibonacci Solitair!\n";
    cout << "1) New Deck\n";
    cout << "2) Display Deck\n";
    cout << "3) Shuffle Deck\n";
    cout << "4) Play Solitaire\n";
    cout << "5) Exit\n";
    cin >> userChoice;
}

bool isFibo(int n)
{
    int x, r;
    
	x = n * n * 5 - 4;
	r = sqrt(double(x));
	if (r * r == x)
	{
	    return true;	    
	}

	x = n * n * 5 + 4;
	r = sqrt(double(x));
	if (r * r == x)
	{
	    return true;	    
	}
	
	return false;
}

int main()
{
    do
    {
        displayMenu(); //call function to display menu
        switch (userChoice)
		{
		case 5:
			cout << "Good-bye." << endl;
			break;
		case 1:
		    cout << "Selecting New Deck...\n";
		    myDeck.refreshDeck();
			break;
		case 2:
			cout << "Your current Deck: \n";
			myDeck.displayDeck();
			break;
		case 3:
		    cout << "Shuffling the Deck...\n";
		    myDeck.shuffle();
		    break;
		case 4:
		    cout << "Playing Fibonacci Solitaire!!!\n";
		    plays += 1;
		    do 
		    {
		        pileSum += myDeck.deal().getValue();
		        
		        if(isFibo(pileSum))
		        {
		            cout << "\tFibo: " << pileSum << endl;
		            pileSum = 0;
		            piles++;
		        }
		        else if(myDeck.isEmpty())
		        {
		            cout << "\tLast hand value: " << pileSum << endl;
		            piles++;
		            break;
		        }
		    } while(!myDeck.isEmpty());
		    
            if(isFibo(pileSum))
            {
                cout << "Winner in " << piles << " piles!!!" << endl;
                piles = 0;
            }
            else
            {
                cout << "Loser in " << piles << " piles!!!" << endl;
                pileSum = 0;
                piles = 0;
            }
            
		    cout << "\ngames played: " << plays << endl;
		    
		    break;
		default:
			cout << "Sorry, " << userChoice;
			cout << " isn't a valid choice." << endl;
		}
	} while (userChoice != 5);
	return 0;
}

