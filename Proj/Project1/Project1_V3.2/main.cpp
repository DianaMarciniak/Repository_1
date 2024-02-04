/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 29, 2024, 5:07 PM
 * Purpose : Project1 Version 3.1
 */

// System Libraries
#include <iostream>  // I/O Library
#include <fstream>   // File Library
#include <cstdlib>   // Random Function Library
#include <ctime>     // Time Library
#include <iomanip>   // Formatting Library
using namespace std;

// Global Constants - Math Physics, Chemistry, Conversions

// Function Prototypes

// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Declare all variables
    const unsigned short cards = 52; // The deck of cards 
    unsigned short C1, C2, C3, C4, C5, dealer;
    unsigned char nCards,
                  again, // Play again [y/n]
                  answer,
                  aCard; // Another card [y/n]
    unsigned int points = 0;
    string card1, card2, card3, card4, card5;
    // Suits and faces of the cards 
    string face, suit;
    // Generating Cards
    fstream myfile;
    string fName;
    
    // Initialize file parameters
    fName = "DeckOfCards";
    myfile.open (fName, ios::out);
    
    // Initialize all variables
    
    
    // THe deck of cards
    for (int i = 0; i < cards ; i++){
        
        switch(i / 13){
            // The suits 
            case 0: suit = "♠"; break;
            case 1: suit = "⬥"; break;
            case 2: suit = "♣"; break;
            default: suit = "♥"; break;
        }
        // The faces 
        char x = i % 13;
        face = x == 0 ? "A":
               x == 1 ? "2":
               x == 2 ? "3":
               x == 3 ? "4":
               x == 4 ? "5":
               x == 5 ? "6":
               x == 6 ? "7": 
               x == 7 ? "8":
               x == 8 ? "9":
               x == 9 ? "10":
               x == 10 ? "J":
               x == 11 ? "Q" : "K";
        
        
        myfile << setw(5) << face << suit;
        
        myfile << endl;
    }
    
    myfile.close();
    
    myfile.open(fName, ios::in);
    
    nCards=52;
    
    // C1-C10 in the range 1-52
    C1 = rand()%nCards+1; 
    C2 = rand()%nCards+1;
    C3 = rand()%nCards+1;
    C4 = rand()%nCards+1;
    C5 = rand()%nCards+1;
 
    string card;
    for (int i = 1; i <= nCards; i++) {
        myfile >> card;
        if (C1 == i) 
            card1 = card;
        if (C2 == i) 
            card2 = card;
        if (C3 == i) 
            card3 = card;
        if (C4 == i) 
            card4 = card;
        if (C5 == i) 
            card5 = card;
    }
    
    
    myfile.close();
    
    // Process or Map solutions 
    dealer = rand() % 21 + 4;
    
    cout << "Welcome to Blackjack!" << endl;
    
    do{
    cout << "Here are your first two cards: " << endl;
    cout << card1 << " " << card2 << endl;
    
    // Points for card1
   
    if (card1 == "A♠" || card1 == "A⬥" || card1 == "A♣" || card1 == "A♥") {
        
        cout << "Do you want count Ace as 11? [y/n]";
        cin >> answer;
        if (answer == 'y') points += 11;
        else points += 1;
        
    } else if (card1 == "9♠" || card1 == "9⬥" || card1 == "9♣" || card1 == "9♥") {
        
        points += 9;
        
    } else if (card1 == "8♠" || card1 == "8⬥" || card1 == "8♣" || card1 == "8♥" ) {
        
        points += 8;
        
    } else if (card1 == "7♠" || card1 == "7⬥" || card1 == "7♣" || card1 == "7♥" ) {
        
        points += 7;
        
    } else if (card1 == "6♠" || card1 == "6⬥" || card1 == "6♣" || card1 == "6♥") {
        
        points += 6;
        
    } else if (card1 == "5♠" || card1 == "5⬥" || card1 == "5♣" || card1 == "5♥") {
        
        points += 5;
        
    } else if (card1 == "4♠" || card1 == "4⬥" || card1 == "4♣" || card1 == "4♥") {
        
        points += 4;
        
    } else if (card1 == "3♠" || card1 == "3⬥" || card1 == "3♣" || card1 == "3♥") {
        
        points += 3;
        
    } else if (card1 == "2♠" || card1 == "2⬥" || card1 == "2♣" || card1 == "2♥") {
        
        points += 2;   
    }  else if (card1 == "J♠" || card1 == "J⬥" || card1 == "J♣" || card1 == "J♥" ||
               card1 == "Q♠" || card1 == "Q⬥" || card1 == "Q♣" || card1 == "Q♥" ||
               card1 == "K♠" || card1 == "K⬥" || card1 == "K♣" || card1 == "K♥" ||
               card1 == "10♠" || card1 == "10⬥" || card1 == "10♣" || card1 == "10♥") {
        points += 10;
    }
    
    // Points for card2
    
    if (card2 == "A♠" || card2 == "A⬥" || card2 == "A♣" || card2 == "A♥") {
        
        cout << "Do you want count Ace as 11? [y/n]";
        cin >> answer;
        if (answer == 'y') points += 11;
        else points += 1;
        
    } else if (card2 == "9♠" || card2 == "9⬥" || card2 == "9♣" || card2 == "9♥") {
        
        points += 9;
        
    } else if (card2 == "8♠" || card2 == "8⬥" || card2 == "8♣" || card2 == "8♥" ) {
        
        points += 8;
        
    } else if (card2 == "7♠" || card2 == "7⬥" || card2 == "7♣" || card2 == "7♥" ) {
        
        points += 7;
        
    } else if (card2 == "6♠" || card2 == "6⬥" || card2 == "6♣" || card2 == "6♥") {
        
        points += 6;
        
    } else if (card2 == "5♠" || card2 == "5⬥" || card2 == "5♣" || card2 == "5♥") {
        
        points += 5;
        
    } else if (card2 == "4♠" || card2 == "4⬥" || card2 == "4♣" || card2 == "4♥") {
        
        points += 4;
        
    } else if (card2 == "3♠" || card2 == "3⬥" || card2 == "3♣" || card2 == "3♥") {
        
        points += 3;
        
    } else if (card2 == "2♠" || card2 == "2⬥" || card2 == "2♣" || card2 == "2♥") {
        
        points += 2;   
        
    }  else if (card2 == "J♠" || card2 == "J⬥" || card2 == "J♣" || card2 == "J♥" ||
               card2 == "Q♠" || card2 == "Q⬥" || card2 == "Q♣" || card2 == "Q♥" ||
               card2 == "K♠" || card2 == "K⬥" || card2 == "K♣" || card2 == "K♥" ||
               card2 == "10♠" || card2 == "10⬥" || card2 == "10♣" || card2 == "10♥") {
        
        points += 10;
    }
    
    cout << "The value of a hand is: " << points << endl;
    
    cout << "Would you like to draw another card? [y/n]";
    cin >> aCard;
    
    if (aCard == 'y') {
        
        cout << card3 << endl;
        
        // Points for card3

        if (card3 == "A♠" || card3 == "A⬥" || card3 == "A♣" || card3 == "A♥") {

            points += 11;

        } else if (card3 == "9♠" || card3 == "9⬥" || card3 == "9♣" || card3 == "9♥") {

            points += 9;

        } else if (card3 == "8♠" || card3 == "8⬥" || card3 == "8♣" || card3 == "8♥" ) {

            points += 8;

        } else if (card3 == "7♠" || card3 == "7⬥" || card3 == "7♣" || card3 == "7♥" ) {

            points += 7;

        } else if (card3 == "6♠" || card3 == "6⬥" || card3 == "6♣" || card3 == "6♥") {

            points += 6;

        } else if (card3 == "5♠" || card3 == "5⬥" || card3 == "5♣" || card3 == "5♥") {

            points += 5;

        } else if (card1 == "4♠" || card1 == "4⬥" || card1 == "4♣" || card1 == "4♥") {

            points += 4;

        } else if (card3 == "3♠" || card3 == "3⬥" || card3 == "3♣" || card3 == "3♥") {

            points += 3;

        } else if (card3 == "2♠" || card3 == "2⬥" || card3 == "2♣" || card3 == "2♥") {

            points += 2;   

        }  else if (card3 == "J♠" || card3 == "J⬥" || card3 == "J♣" || card3 == "J♥" ||
                   card3 == "Q♠" || card3 == "Q⬥" || card3 == "Q♣" || card3 == "Q♥" ||
                   card3 == "K♠" || card3 == "K⬥" || card3 == "K♣" || card3 == "K♥" ||
                   card3 == "10♠" || card3 == "10⬥" || card3 == "10♣" || card3 == "10♥") {

            points += 10;
        }
        
    } else if (aCard == 'n') {
        
        cout << "The value of a hand is: " << points << endl; 
        if (points > dealer) {
            cout << "The dealer has: " << dealer << endl;
            cout << "Congratulations! You won!" << endl;
        }
        else if (points < dealer) {
            cout << "You lost!" << endl;
        }
        else {
            cout << "It's a draw." << endl;
        }
    }
    
    else {
        
        while (aCard != 'y') {
            cout << "Invalid input" << endl;
            cout << "Would you like to draw another card? [y/n]";
            cin >> aCard;
        };
    }
    
    
    cout << "The value of a hand is: " << points << endl; 
    
    if (points > 21) {
        cout << "You lost!" << endl;
    } else {
        cout << "Would you like to draw another card? [y/n]";
        cin >> aCard;
        
        if (aCard == 'y') {
            cout << card4;
        } else {
            
            while (aCard != 'y') {
            cout << "Invalid input" << endl;
            cout << "Would you like to draw another card? [y/n]";
            cin >> aCard;
            };
        }
    }
    //Display the output
    
    cout << "Do you want to play again? [y/n]";
    cin >> again;
    
    points = 0;

    } while (again == 'y');
        
    //Exit the Program 
    return 0;
}

/* // Points for card4
    
    if (card4 == "A♠" || card4 == "A⬥" || card4 == "A♣" || card4 == "A♥") {
        
        points += 11;
        
    } else if (card4 == "9♠" || card4 == "9⬥" || card4 == "9♣" || card4 == "9♥") {
        
        points += 9;
        
    } else if (card4 == "8♠" || card4 == "8⬥" || card4 == "8♣" || card4 == "8♥" ) {
        
        points += 8;
        
    } else if (card4 == "7♠" || card4 == "7⬥" || card4 == "7♣" || card4 == "7♥" ) {
        
        points += 7;
        
    } else if (card4 == "6♠" || card4 == "6⬥" || card4 == "6♣" || card4 == "6♥") {
        
        points += 6;
        
    } else if (card4 == "5♠" || card4 == "5⬥" || card4 == "5♣" || card4 == "5♥") {
        
        points += 5;
        
    } else if (card4 == "4♠" || card4 == "4⬥" || card4 == "4♣" || card4 == "4♥") {
        
        points += 4;
        
    } else if (card4 == "3♠" || card4 == "3⬥" || card4 == "3♣" || card4 == "3♥") {
        
        points += 3;
        
    } else if (card4 == "2♠" || card4 == "2⬥" || card4 == "2♣" || card4 == "2♥") {
        
        points += 2;   
        
    }  else if (card4 == "J♠" || card4 == "J⬥" || card4 == "J♣" || card4 == "J♥" ||
               card4 == "Q♠" || card4 == "Q⬥" || card4 == "Q♣" || card4 == "Q♥" ||
               card4 == "K♠" || card4 == "K⬥" || card4 == "K♣" || card4 == "K♥" ||
               card4 == "10♠" || card4 == "10⬥" || card4 == "10♣" || card4 == "10♥") {
        
        points += 10;
    }
    
    // Points for card5
    
    if (card5 == "A♠" || card5 == "A⬥" || card5 == "A♣" || card5 == "A♥") {
        
        points += 11;
        
    } else if (card5 == "9♠" || card5 == "9⬥" || card5 == "9♣" || card5 == "9♥") {
        
        points += 9;
        
    } else if (card5 == "8♠" || card5 == "8⬥" || card5 == "8♣" || card5 == "8♥" ) {
        
        points += 8;
        
    } else if (card5 == "7♠" || card5 == "7⬥" || card5 == "7♣" || card5 == "7♥" ) {
        
        points += 7;
        
    } else if (card5 == "6♠" || card5 == "6⬥" || card5 == "6♣" || card5 == "6♥") {
        
        points += 6;
        
    } else if (card5 == "5♠" || card5 == "5⬥" || card5 == "5♣" || card5 == "5♥") {
        
        points += 5;
        
    } else if (card5 == "4♠" || card5 == "4⬥" || card5 == "4♣" || card5 == "4♥") {
        
        points += 4;
        
    } else if (card5 == "3♠" || card5 == "3⬥" || card5 == "3♣" || card5 == "3♥") {
        
        points += 3;
        
    } else if (card5 == "2♠" || card5 == "2⬥" || card5 == "2♣" || card5 == "2♥") {
        
        points += 2;   
        
    }  else if (card5 == "J♠" || card5 == "J⬥" || card5 == "J♣" || card5 == "J♥" ||
               card5 == "Q♠" || card5 == "Q⬥" || card5 == "Q♣" || card5 == "Q♥" ||
               card5 == "K♠" || card5 == "K⬥" || card5 == "K♣" || card5 == "K♥" ||
               card5 == "10♠" || card5 == "10⬥" || card5 == "10♣" || card5 == "10♥") {
        
        points += 10;
    } */