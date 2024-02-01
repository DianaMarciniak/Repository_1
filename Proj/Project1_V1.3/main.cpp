/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 26, 2024, 9:18 PM
 * Purpose : Project1 Version 1.3
 */

// System Libraries
#include <iostream>  // I/O Library
#include <fstream>   // File Library
using namespace std;

// Global Constants - Math Physics, Chemistry, Conversions

// Function Prototypes

// Program Execution Begins Here
int main(int argc, char** argv) {
    // Set a random seed
    
    // Declare all variables
    unsigned short players; // The number of players
    unsigned char player1, player2, player3, player4, player5; // Names of the players 
    const unsigned short cards = 52; // The deck of cards 
    // Suits of the cards 
    string spade = "♠",
           diamond = "⬥",
           club = "♣",
           heart = "♥"; 
    
    // Generating Cards
    fstream myfile;
    string fileName;
    
    // Initialize file parameters
    fileName = "DeckOfCards";
    myfile.open (fileName, ios::out);
    
    // Initialize all variables
    
    // Cards: suit spade "♠"
    myfile << "  A " << spade << endl;
    
    // Cards: 2♠ - 9♠
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += spade;
        myfile << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << spade << endl
           << "  J " << spade << endl
           << "  Q " << spade << endl
           << "  K " << spade << endl;
    
    // Cards: suit diamond "⬥"
    myfile << "  A " << diamond << endl;
    
    // Cards: 2⬥ - 9⬥
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += diamond;
        myfile << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << diamond << endl
           << "  J " << diamond << endl
           << "  Q " << diamond << endl
           << "  K " << diamond << endl;
    
    // Cards: suit club "♣"
    myfile << "  A " << club << endl;
    
    // Cards: 2♣ - 9♣
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += club;
        myfile << "  " << i << " " << strCard << endl;
    
    }
    
    myfile << " 10 " << club << endl
           << "  J " << club << endl
           << "  Q " << club << endl
           << "  K " << club << endl;

    
    // Cards: suit heart "♥"
    myfile << "  A " << heart << endl;
  
    
    // Cards: 2♥ - 9♥
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += heart;
        myfile << "  " << i << " " << strCard << endl;
      
    }
    
    myfile << " 10 " << heart << endl
           << "  J " << heart << endl
           << "  Q " << heart << endl
           << "  K " << heart << endl;
    
    myfile.close();
    
    // Process or Map solutions
    cout << "Welcome to Blackjack!" << endl;
    
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
    }
    
    //Display the output

    
    //Exit the Program 
    return 0;
}