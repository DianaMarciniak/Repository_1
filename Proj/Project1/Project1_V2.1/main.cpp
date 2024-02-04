/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 26, 2024, 7:21 PM
 * Purpose : Project1 Version 2.1
 */

// System Libraries
#include <iostream>  // I/O Library
#include <fstream>   // File Library
#include <cstdlib>   // Random Function Library
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
    unsigned char player1, player2, player3, player4, player5; // Names of the players 
    const unsigned short cards = 52; // The deck of cards 
    string card1, card2, card3, card4, card5;
    // Suits of the cards 
    string suit, 
           face;
    // Generating Cards
    fstream myfile;
    string fileName;
    
    // Initialize file parameters
    fileName = "DeckOfCards";
    myfile.open (fileName, ios::out);
    
    // Initialize all variables
    
    for (int i = 0; i < cards ; i++){
        switch(i / 13){
            case 0: suit = "♠"; break;
            case 1: suit = "⬥"; break;
            case 2: suit = "♣"; break;
            case 4: suit = "♥"; break;
        }
    
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
        cout << setw(5) << card << endl;
        
    }
    
    myfile.close();
    
    // Process or Map solutions
    /*cout << "Welcome to Blackjack!" << endl;
    
    // The amount of the players
    cout << "Enter the number of players [2-5]: ";
    cin >> players;
    
    // Names of the players
    cout << "Enter the names of players: ";
    switch (players) {
        case 2: cin >> player1 >> player2; break;
        case 3: cin >> player1 >> player2 >> player3; break;
        case 4: cin >> player1 >> player2 >> player3 >> player4; break;
        case 5: cin >> player1 >> player2 >> player3 >> player4 >> player5; break;
    }*/
    
    //Display the output

    
    //Exit the Program 
    return 0;
}