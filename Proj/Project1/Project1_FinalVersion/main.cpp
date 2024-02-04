/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on January 30, 2024, 2:52 PM
 * Purpose : Project1 Final Version 
 */

// System Libraries
#include <iostream>  // I/O Library
#include <fstream>   // File Library
#include <cstdlib>   // Random Function Library
#include <ctime>     // Time Library
#include <cmath>     // Math Library 
#include <iomanip>   // Formatting Library
using namespace std;

// Global Constants - Math Physics, Chemistry, Conversions

// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Set a random seed
    srand (static_cast <unsigned int> (time(0)));
    
    // Declare all variables
    const unsigned short cards = 52;          // The deck of cards 
    unsigned short C1, C2, C3, C4, C5,        // Random numbers
                   dealer;                    // The dealer's points
    unsigned char nCards,                     // Number of cards
                  start,                      // Start the game [y/n]
                  again,                      // Play again [y/n]
                  answer,                     // Counting Ace as 11 [y/n]
                  aCard;                      // Another card [y/n]
    unsigned int points = 0;                  // The user's points start from 0
    float prob = 42.22;                       // Probability of winning the game is 42.22%
    string card1, card2, card3, card4, card5; // Random cards
    string face, suit;                        // Suits and faces of the cards 
    fstream myfile;                           // Create file
    string fName;                             // Naming the file 
    
    // Initialize file parameters
    fName = "DeckOfCards";
    myfile.open (fName, ios::out);
    
    // THe deck of cards
    for (int i = 0; i < cards ; i++){
        
        switch(i / 13){
            
            // Generating suits 
            case 0: suit = "♠"; break;
            case 1: suit = "⬥"; break;
            case 2: suit = "♣"; break;
            default: suit = "♥"; break;
        }
        
        // Generating faces 
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
        
        // Write to the file 
        myfile << setw(5) << face << suit;
        myfile << endl;
    }
    // Close the file
    myfile.close();
    
    // Open the file
    myfile.open(fName, ios::in);
    nCards = 52;
    
    // Random numbers C1-C5 in the range 1-52
    C1 = rand()%nCards + 1; 
    C2 = rand()%nCards + 1;
    C3 = rand()%nCards + 1;
    C4 = rand()%nCards + 1;
    C5 = rand()%nCards + 1;
    
    // Pulling random cards from the file
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
    
    // Close the file
    myfile.close();
    
    // Process or Map solutions 
    for (int i = 0; i <= 40; i++) {
        cout << "*";
    }
    
    cout << endl;
    // THe introduction
    cout << setw(31) << "Welcome to Blackjack!" << endl;
    cout << endl;
    cout << "You will be given two cards. ";
    cout << "You can draw only three more cards from the deck. ";
    cout << endl;
    cout << "Your probability of winning is ";
    cout << round(prob) << "%." << endl;
    
    // Asking the user if they want to start the game
    do {
        cout << "Do you want to start the game? [y/n] ";\
        cin >> start;
    } while (start != 'y');
    
    // Dealer's random number of points
    dealer = rand() % (21 - 18) + 18; 
   
    // Two random cards 
    cout << "Here are your first two cards: " << endl;
    cout << card1 << " " << card2 << endl;

    // Calculating points for card1
    if (card1 == "A♠" || card1 == "A⬥" || card1 == "A♣" || card1 == "A♥") {

        // The user chooses to count Ace as 1 or 11
        cout << "Ace can be counted as 1 or 11. ";
        cout << "Do you want to count Ace as 11? [y/n] ";
        cin >> answer;
        if (answer == 'y') points += 11;
        else points += 1;

    // The cards from 2 through 9 are valued at their face value
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

    // The 10, Jack, Queen, and King are all valued at 10    
    }  else if (card1 == "J♠" || card1 == "J⬥" || card1 == "J♣" || card1 == "J♥" ||
               card1 == "Q♠" || card1 == "Q⬥" || card1 == "Q♣" || card1 == "Q♥" ||
               card1 == "K♠" || card1 == "K⬥" || card1 == "K♣" || card1 == "K♥" ||
               card1 == "10♠" || card1 == "10⬥" || card1 == "10♣" || card1 == "10♥") {

        points += 10;
    }

    // Calculating points for card2
    if (card2 == "A♠" || card2 == "A⬥" || card2 == "A♣" || card2 == "A♥") {

        // The user chooses to count Ace as 1 or 11
        cout << "Ace can be counted as 1 or 11. ";
        cout << "Do you want to count Ace as 11? [y/n] ";
        cin >> answer;
        if (answer == 'y') points += 11;
        else points += 1;

    // The cards from 2 through 9 are valued at their face value
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

    // The 10, Jack, Queen, and King are all valued at 10 
    }  else if (card2 == "J♠" || card2 == "J⬥" || card2 == "J♣" || card2 == "J♥" ||
               card2 == "Q♠" || card2 == "Q⬥" || card2 == "Q♣" || card2 == "Q♥" ||
               card2 == "K♠" || card2 == "K⬥" || card2 == "K♣" || card2 == "K♥" ||
               card2 == "10♠" || card2 == "10⬥" || card2 == "10♣" || card2 == "10♥") {

        points += 10;
    }
    
    // If points = 21 - Blackjack; the user wins
    if (points == 21) {
        
        cout << "BLACKJACK!" << endl;
        cout << "You win!";
        
    } 
    
    // Else, continue the game
    else {
        // The value of a hand is the sum of the points of card1 and card2
        cout << "The value of a hand is: " << points << endl;
        cout << "Would you like to draw another card? [y/n] ";
        cin >> aCard;

        // If the input is invalid, repeat the question 
        while (aCard != 'y' && aCard != 'n') {
            cout << "INVALID INPUT!" << endl;
            cout << "Would you like to draw another card? [y/n] ";
            cin >> aCard;
        };

        // Drawing a third card - yes
        if (aCard == 'y') {

            cout << card3 << endl;

            // Calculating points for card3
            if (card3 == "A♠" || card3 == "A⬥" || card3 == "A♣" || card3 == "A♥") {

                // The user chooses to count Ace as 1 or 11
                cout << "Ace can be counted as 1 or 11. ";
                cout << "Do you want to count Ace as 11? [y/n] ";
                cin >> answer;
                if (answer == 'y') points += 11;
                else points += 1;

            // The cards from 2 through 9 are valued at their face value
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

            } else if (card3 == "4♠" || card3 == "4⬥" || card3 == "4♣" || card3 == "4♥") {

                points += 4;

            } else if (card3 == "3♠" || card3 == "3⬥" || card3 == "3♣" || card3 == "3♥") {

                points += 3;

            } else if (card3 == "2♠" || card3 == "2⬥" || card3 == "2♣" || card3 == "2♥") {

                points += 2;   

            // The 10, Jack, Queen, and King are all valued at 10 
            }  else if (card3 == "J♠" || card3 == "J⬥" || card3 == "J♣" || card3 == "J♥" ||
                       card3 == "Q♠" || card3 == "Q⬥" || card3 == "Q♣" || card3 == "Q♥" ||
                       card3 == "K♠" || card3 == "K⬥" || card3 == "K♣" || card3 == "K♥" ||
                       card3 == "10♠" || card3 == "10⬥" || card3 == "10♣" || card3 == "10♥") {

                points += 10;
            }

            cout << "The value of a hand is: " << points << endl; 

            // If points are > 21 - end the game
            if (points > 21) {
                cout << "You lost" << endl;
            } 
            // If the points are not > 21 - continue the game
            else { 
                // User chooses if he/she wants to draw another card
                cout << "Would you like to draw another card? [y/n] ";
                cin >> aCard;

                // If the input is invalid, repeat the question 
                while (aCard != 'y' && aCard != 'n') {
                    cout << "Invalid input" << endl;
                    cout << "Would you like to draw another card? [y/n] ";
                    cin >> aCard;
                };

                // Drawing a fourth card - yes
                if (aCard == 'y') {

                    cout << card4 << endl;

                    if (card4 == "A♠" || card4 == "A⬥" || card4 == "A♣" || card4 == "A♥") {

                        // The user chooses to count Ace as 1 or 11
                        cout << "Ace can be counted as 1 or 11. ";
                        cout << "Do you want to count Ace as 11? [y/n] ";
                        cin >> answer;
                        if (answer == 'y') points += 11;
                        else points += 1;

                    // The cards from 2 through 9 are valued at their face value
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

                    // The 10, Jack, Queen, and King are all valued at 10 
                    }  else if (card4 == "J♠" || card4 == "J⬥" || card4 == "J♣" || card4 == "J♥" ||
                               card4 == "Q♠" || card4 == "Q⬥" || card4 == "Q♣" || card4 == "Q♥" ||
                               card4 == "K♠" || card4 == "K⬥" || card4 == "K♣" || card4 == "K♥" ||
                               card4 == "10♠" || card4 == "10⬥" || card4 == "10♣" || card4 == "10♥") {

                        points += 10;
                    }

                    // The user's points
                    cout << "The value of a hand is: " << points << endl; 

                    // If points are > 21 - end the game
                    if (points > 21) {
                        cout << "You lost" << endl;
                    } 
                    // If the points are not > 21 - continue the game
                    else { 
                        // User chooses if he/she wants to draw another card
                        cout << "Would you like to draw another card? [y/n] ";
                        cin >> aCard;
                    }

                    // If the input is invalid, repeat the question 
                    while (aCard != 'y' && aCard != 'n') {
                        cout << "Invalid input" << endl;
                        cout << "Would you like to draw another card? [y/n] ";
                        cin >> aCard;
                    };

                    // Drawing a fifth card - yes
                    if (aCard == 'y') {

                        cout << card5 << endl;

                        //Counting points for card5
                        if (card5 == "A♠" || card5 == "A⬥" || card5 == "A♣" || card5 == "A♥") {

                            // The user chooses to count Ace as 1 or 11
                            cout << "Ace can be counted as 1 or 11. ";
                            cout << "Do you want to count Ace as 11? [y/n] ";
                            cin >> answer;
                            if (answer == 'y') points += 11;
                            else points += 1;

                        // The cards from 2 through 9 are valued at their face value
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

                        // The 10, Jack, Queen, and King are all valued at 10 
                        }  else if (card5 == "J♠" || card5 == "J⬥" || card5 == "J♣" || card5 == "J♥" ||
                                   card5 == "Q♠" || card5 == "Q⬥" || card5 == "Q♣" || card5 == "Q♥" ||
                                   card5 == "K♠" || card5 == "K⬥" || card5 == "K♣" || card5 == "K♥" ||
                                   card5 == "10♠" || card5 == "10⬥" || card5 == "10♣" || card5 == "10♥") {

                            points += 10;
                        } 

                        // The user's points
                        cout << "The value of a hand is: " << points << endl;

                        // The dealer's points
                        cout << "The dealer has: " << dealer << endl;

                        // If the user has more points than the dealer and the points are <= 21 - the user wins
                        if (points > dealer && points <= 21) {
                            cout << "Congratulations! You won!" << endl;
                        }

                        //If the user has less points than the dealer or the points are > 21 - the user looses 
                        else if (points < dealer || points > 21) {
                            cout << "You lost!" << endl;
                        }

                        // If user's points = the dealer's points
                        else {
                            cout << "It's a draw." << endl;
                        }

                    // Drawing a fifth card - no
                    } else if (aCard == 'n') {

                        // The dealer's points
                        cout << "The dealer has: " << dealer << endl;

                        // If the user has more points than the dealer and the points are <= 21 - the user wins
                        if (points > dealer && points <= 21) {
                        cout << "Congratulations! You won!" << endl;
                        }

                        //If the user has less points than the dealer or the points are > 21 - the user looses 
                        else if (points < dealer || points > 21) {
                            cout << "You lost!" << endl;
                        }

                        // If user's points = the dealer's points
                        else {
                            cout << "It's a draw." << endl;
                        }

                    }

                // Drawing a fourth card - no
                } else if (aCard == 'n') {

                    // The dealer's points
                    cout << "The dealer has: " << dealer << endl;

                    // If the user has more points than the dealer and the points are <= 21 - the user wins
                    if (points > dealer && points <= 21) {
                        cout << "Congratulations! You won!" << endl;
                    }

                    //If the user has less points than the dealer or the points are > 21 - the user looses 
                    else if (points < dealer || points > 21) {
                        cout << "You lost!" << endl;
                    }

                    // If user's points = the dealer's points
                    else {
                        cout << "It's a draw." << endl;
                    }
                }
            }

        // Drawing a third card - no 
        } else if (aCard == 'n') {

            // The dealer's points
            cout << "The dealer has: " << dealer << endl;

            // If the user has more points than the dealer and the points are <= 21 - the user wins
            if (points > dealer && points <= 21) {
                cout << "Congratulations! You won!" << endl;
            }

            //If the user has less points than the dealer or the points are > 21 - the user looses 
            else if (points < dealer || points > 21) {
                cout << "You lost!" << endl;
            }

            // If user's points = the dealer's points
            else {
                cout << "It's a draw." << endl;
            }
        } 
    }
    
    cout << endl;
    
    // End the game
    cout << setw(30) << "Thanks for the game!" << endl;
    for (int i = 0; i <= 40; i++) {
        cout << "*";
    }
    
    //Exit the Program 
    return 0;
}