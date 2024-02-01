/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 26, 2024, 3:16 PM
 * Purpose : Project1 Version 1.1
 */

//System Libraries
#include <iostream> // I/O Library
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
    
    //Initialize all variables
    
    cout << "  A " << spade << endl;
    
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += spade;
        cout << "  " << i << " " << strCard << endl;
    }
    
    cout << " 10 " << spade << endl;
    cout << "  J " << spade << endl;
    cout << "  Q " << spade << endl;
    cout << "  K " << spade << endl;
    
    
    cout << "  A " << diamond << endl;
    
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += diamond;
        cout << "  " << i << " " << strCard << endl;
    }
    
    cout << " 10 " << diamond << endl;
    cout << "  J " << diamond << endl;
    cout << "  Q " << diamond << endl;
    cout << "  K " << diamond << endl;
    
    cout << "  A " << club << endl;
    
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += club;
        cout << "  " << i << " " << strCard << endl;
    }
    
    cout << " 10 " << club << endl;
    cout << "  J " << club << endl;
    cout << "  Q " << club << endl;
    cout << "  K " << club << endl;
    
    cout << "  A " << heart << endl;
    
    for (int i = 2; i < 10; i++) {
        string strCard;
        strCard += heart;
        cout << "  " << i << " " << strCard << endl;
    }
    
    cout << " 10 " << heart << endl;
    cout << "  J " << heart << endl;
    cout << "  Q " << heart << endl;
    cout << "  K " << heart << endl;
    
    //Process or Map solutions
    
    
    //Display the output
    
    
    //Exit the Program 
    return 0;
}

