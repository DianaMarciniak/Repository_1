/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 26, 2024, 6:06 PM
 * Purpose : Project1 Version 1.2
 */

//System Libraries
#include <iostream> // I/O Library
#include <fstream> // File Library
using namespace std;

//Global Constants - Math Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    
    //Declare all variables
    const unsigned short cards = 52;   
    string spade = "♠",
           diamond = "⬥",
           club = "♣",
           heart = "♥"; 
    
    fstream myfile;
    string fileName;
    
    // Initialize file parameters
    fileName = "DeckOfCards";
    myfile.open (fileName, ios::out);
    
    //Initialize all variables
    
    // Cards: suit spade "♠"
    myfile << "  A " << spade << endl;
    cout << "  A " << spade << endl;
    
    // Cards: 2♠ - 9♠
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += spade;
        myfile << "  " << i << " " << strCard << endl;
        cout << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << spade << endl
           << "  J " << spade << endl
           << "  Q " << spade << endl
           << "  K " << spade << endl;
    
    cout << " 10 " << spade << endl
         << "  J " << spade << endl
         << "  Q " << spade << endl
         << "  K " << spade << endl;
    
    // Cards: suit diamond "⬥"
    myfile << "  A " << diamond << endl;
    cout << "  A " << diamond << endl;
    
    // Cards: 2⬥ - 9⬥
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += diamond;
        myfile << "  " << i << " " << strCard << endl;
        cout << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << diamond << endl
           << "  J " << diamond << endl
           << "  Q " << diamond << endl
           << "  K " << diamond << endl;
   
    cout << " 10 " << diamond << endl
         << "  J " << diamond << endl
         << "  Q " << diamond << endl
         << "  K " << diamond << endl;
    
    // Cards: suit club "♣"
    myfile << "  A " << club << endl;
    cout << "  A " << club << endl;
    
    // Cards: 2♣ - 9♣
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += club;
        myfile << "  " << i << " " << strCard << endl;
        cout << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << club << endl
           << "  J " << club << endl
           << "  Q " << club << endl
           << "  K " << club << endl;
    
    cout << " 10 " << club << endl
         << "  J " << club << endl
         << "  Q " << club << endl
         << "  K " << club << endl;
    
    // Cards: suit heart "♥"
    myfile << "  A " << heart << endl;
    cout << "  A " << heart << endl;
    
    // Cards: 2♥ - 9♥
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += heart;
        myfile << "  " << i << " " << strCard << endl;
        cout << "  " << i << " " << strCard << endl;
    }
    
    myfile << " 10 " << heart << endl
           << "  J " << heart << endl
           << "  Q " << heart << endl
           << "  K " << heart << endl;
    
    cout << " 10 " << heart << endl
         << "  J " << heart << endl
         << "  Q " << heart << endl
         << "  K " << heart << endl;
    
    //Process or Map solutions
    
    
    //Display the output
    
    
    //Exit the Program 
    myfile.close();
    return 0;
}


