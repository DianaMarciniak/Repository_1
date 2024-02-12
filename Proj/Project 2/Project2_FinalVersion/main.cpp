/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on Feb 10, 11:48 AM
 * Purpose : Project2 Final Version 
 */

// System Libraries
#include <iostream>  // I/O Library
#include <cstdlib>   // Random Function Library
#include <ctime>     // Time Library
#include <cmath>     // Math Library 
#include <iomanip>   // Formatting Library
using namespace std;

// Global Constants - Math Physics, Chemistry, Conversions

// Function Prototypes Begin Here
void genDeck(string [], int);
void shfflDeck(string [], int);
void prntAry(string [],int,int);
void bublSrt(string [],int);
int calcP(string card);
bool nxtGm();

// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Set a random seed
    srand (static_cast <unsigned int> (time(0)));
    
    // Declare all variables
    const unsigned short cards = 52;          // Number of cards
    unsigned short points = 0,                // The user's points start from 0
                   dealer;                    // The dealer's points
    unsigned char nCards,                     // Number of cards
                  start,                      // Start the game [y/n]
                  again,                      // Play again [y/n]
                  aCard;                      // Another card [y/n]
    float prob = 42.22;                       // Probability of winning the game is 42.22%
    bool play = true;                         // Next Game
    const int SIZE = 52;                      // Size of the deck
    string deck[SIZE];                        // The deck of cards
    
    // Generate the deck of cards 
    genDeck(deck, cards);

    cout << endl;
    
    // Bubble Sort 
    bublSrt(deck, SIZE);
    
    //Print the array
    prntAry(deck, SIZE, 13);
    
    // Shuffle the deck 
    shfflDeck(deck, cards);

    // Print out "*"
    for (int i = 0; i <= 50; i++) {
        cout << "*";
    }
    
    // Play the game 
    while (play) {
    
        cout << endl;
        // The introduction
        cout << setw(37) << "Welcome to Blackjack!" << endl;
        cout << endl;
        cout << "Here are the rules:" << endl;

        string arr[7][2] = {"a) ", "You will be given two cards. ", 
                            "b) ", "You will see the value of the hand. ",
                            "c) ", "The program will ask you if you want to draw more cards.",
                            "d) ", "Type y for YES and n for NO. ",
                            "e) ", "You can draw only three more cards from the deck. ",
                            "f) ", "The program will display the results. ",
                            "g) ", "If you want to play again, type y for YES and n for NO. "} ;

        for(int i = 0; i < 7; i++) {
            for(int j = 0; j < 2; j++) {
                cout << arr[i][j];
            }
            cout << endl; 
        }
        
        cout << endl;                    
        cout << "Your probability of winning is ";
        cout << round(prob) << "%." << endl;
        cout << "Good Luck!!!" << endl;

        // Asking the user if they want to start the game
        cout << "Are you ready to start the game? [y/n] ";\
        cin >> start;
        if (start != 'y') exit(0);

        // Dealer's random number of points
        dealer = rand() % (21 - 18) + 18; 

        // Two random cards 
        cout << "Here are your first two cards: " << endl;
        cout << deck[0] << " " << deck[1] << endl;

        // Points for the first two cards
        points += calcP(deck[0]);
        points += calcP(deck[1]);

        // If points = 21 - Blackjack; the user wins
        if (points == 21) {

            cout << "BLACKJACK!" << endl;
            cout << "You win!";

        } 
        // Else, continue the game
        else {
            // The value of a hand is the sum of the points of deck[1] and deck[2]
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

                cout << deck[2] << endl;

                points += calcP(deck[2]);

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

                        cout << deck[3] << endl;

                        points += calcP(deck[3]);

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

                            cout << deck[4] << endl;

                            points += calcP(deck[4]);

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
                        } else {

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
                    } else {

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
            } else {

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
        
        // Shuffle the deck again
        shfflDeck(deck, cards);
        
        // Set points equal to 0 for the next game
        points = 0;
        
        play = nxtGm();
    
    } 
    
    // End the game
    cout << endl;
    cout << setw(37) << "Thanks for the game!" << endl;
    for (int i = 0; i <= 50; i++) {
        cout << "*";
    }

    //Exit the Program 
    return 0;
}

// Function to generate a deck of cards
void genDeck(string deck[], int size) {
    
    // Declare variables
    string suits[] = {"♠", "♣", "♥", "♦"};
    string faces[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    static int index = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[index] = faces[j] + suits[i];
            index++;
        }
    }
    
    //Exit the Program 
}

// Function to shuffle the deck
void shfflDeck(string deck[], int size) {
    
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); 
        swap(deck[i], deck[j]);   // Swap deck[i] with deck[j]
    }
}

// Print the array
void prntAry(string a[], int n, int perLine) {
    
    for (int i = 0; i < n; i++) {
        cout << setw(5) << a[i] << " ";
        if (i % perLine == (perLine - 1)) cout << endl;
    }
    
    //Exit the Program 
}

// Bubble Sort
void bublSrt(string a[], int n) {
    
    // Declare variables
    bool swap = true;
    for(int i = 0; i < n-1 && swap; i++) {
        bool swap = false;
        
        for (int j = 0; j < n-1; j++) {
            if (a[j] > a[j+1]) {
                
                string temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
                swap = true;
            }
        }
    }
    
    //Exit the Program 
}

// Calculating points
int calcP(string card) {
    
    // Declare variables
    char face = card[0];
    
    // Calculation
    if (face >= '2' && face <= '9') {
        //Exit1
        return face - '0';
    } 
    
    else if (face == 'A') {
        //Exit2
        return 11;
    } 
    
    else {
        //Exit3
        return 10;
    }
}

// Another game [y/n]
bool nxtGm() {
    
    // Declare variables
    char choice;
    cout << "Do you want to play again? [y/n]: ";
    cin >> choice;
    
    // Check if the input is valid
    while (choice != 'y' && choice != 'n') {
        cout << "Invalid input. Please try again: ";
        cin >> choice;
    }
    
    // Exit the program
    return (choice == 'y');
}

