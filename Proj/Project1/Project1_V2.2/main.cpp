/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 27, 2024, 4:11 PM
 * Purpose : Project1 Version 2.2
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
    unsigned short players; // The number of players
    string player1, player2, player3, player4, player5; // Names of the players 
    const unsigned short cards = 52; // The deck of cards 
    unsigned short C1, C2, C3, C4, C5, C6, C7, C8, C9, C10;
    unsigned char nCards;
    string card1, card2, card3, card4, card5, card6, card7, card8, card9, card10;
    // Suits and faces of the cards 
    string face, suit;
    // Generating Cards
    fstream myfile;
    string fileName;
    
    // Initialize file parameters
    fileName = "DeckOfCards";
    myfile.open (fileName, ios::out);
    
    // Initialize all variables
    
    // THe deck of cards
    for (int i = 0; i < cards ; i++){
        
        switch(i / 13){
            // The suits 
            case 0: suit = "♠"; break;
            case 1: suit = "⬥"; break;
            case 2: suit = "♣"; break;
            case 4: suit = "♥"; break;
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
        
        string card = face + suit;
        myfile << setw(5) << card << endl;
    }
    
    myfile.close();
    
    myfile.open(fileName, ios::in);
    
    nCards=52;
    // C1-C10 in the range 1-52
    C1 = rand()%nCards+1;
    C2 = rand()%nCards+1;
    C3 = rand()%nCards+1;
    C4 = rand()%nCards+1;
    C5 = rand()%nCards+1;
    C6 = rand()%nCards+1;
    C7 = rand()%nCards+1;
    C8 = rand()%nCards+1;
    C9 = rand()%nCards+1;
    C10 = rand()%nCards+1;
  
    string card;
    for (int i = 1; i <= nCards; i++) {
        myfile >> card;
        if (C1 == i) card1 = card;
        if (C2 == i) card2 = card;
        if (C3 == i) card3 = card;
        if (C4 == i) card4 = card;
        if (C5 == i) card5 = card;
        if (C6 == i) card6 = card;
        if (C7 == i) card7 = card;
        if (C8 == i) card8 = card;
        if (C9 == i) card9 = card;
        if (C10 == i) card10 = card;
    }
    
    myfile.close();
    
    cout << card1 << endl;
    cout << card2 << endl;
    cout << card3 << endl;
    cout << card4 << endl;
    cout << card5 << endl; 
    cout << card6 << endl;
    cout << card7 << endl;
    cout << card8 << endl;
    cout << card9 << endl;
    cout << card10 << endl;
    
    // Process or Map solutions
    cout << "Welcome to Blackjack!" << endl;
    
    // The amount of the players
    cout << "Enter the number of players [2-3]: ";
    cin >> players;
    
    // Names of the players
    cout << "Enter the names of players: ";
    
    if (players == 2) {
        cin >> player1 >> player2;
        if (player1 < player2) {
            cout << player1 << " starts the game!" << endl;
        } else {
            cout << player2 << " starts the game!" << endl;
        }
    }
    
    if (players == 3) {
        cin >> player1 >> player2 >> player3;
        
        if (player1 < player2 && player1 < player3 && player2 < player3) {
            // Order: Player1, Player2, Player3
            cout << player1 << " starts the game, then "
                 << player2 << " and " << player3 << endl;
        } 
        
        else if (player1 < player2 && player1 < player3 && player3 < player2) {
            // Order: Player1, Player3, Player2
            cout << player1 << " starts the game, then "
                 << player3 << " and " << player2 << endl;
        } 
        
        else if (player2 < player1 && player2 < player3 && player1 < player3) {
            // Order: Player2, Player1, Player3
            cout << player2 << " starts the game, then "
                 << player1 << " and " << player3 << endl;
        }
        
        else if (player2 < player1 && player2 < player3 && player3 < player1) {
            // Order: Player2, Player3, Player1
            cout << player2 << " starts the game, then "
                 << player3 << " and " << player1 << endl;
        }
        
        else if (player3 < player1 && player3 < player1 && player1 < player2) {
            // Order: Player3, Player1, Player2
            cout << player3 << " starts the game, then "
                 << player1 << " and " << player2 << endl;
        }
        else if (player3 < player1 && player3 < player2 && player2 < player1) {
            // Order: Player3, Player2, Player1
            cout << player3 << " starts the game, then "
                 << player2 << " and " << player1 << endl;
        }
        
    }
    
   
    
    
    //Display the output

    
    //Exit the Program 
    return 0;
}