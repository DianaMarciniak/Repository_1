/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on Feb 9, 8:21 PM
 * Purpose : Project2 Final Version 
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

// Function Prototypes Begins Here
void genDeck(string [], int);
void shuffle(string [], int);
void prntAry(string [],int,int);
void bublSrt(string [],int);
string fillAry ();


// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Set a random seed
    srand (static_cast <unsigned int> (time(0)));
    
    // Declare all variables
    const unsigned short cards = 52;          // The deck of cards 
    unsigned short points = 0,                // The user's points start from 0
                   dealer;                    // The dealer's points
    unsigned char nCards,                     // Number of cards
                  start,                      // Start the game [y/n]
                  again,                      // Play again [y/n]
                  answer,                     // Counting Ace as 11 [y/n]
                  aCard;                      // Another card [y/n]
    float prob = 42.22;                       // Probability of winning the game is 42.22%

    fstream myfile;                           // Creating a file
    string fName;                             // Naming the file 
    
    const int SIZE = 52;
    string deck[SIZE];
    
    genDeck(deck, cards);

    cout << endl;
 
    // Bubble Sort 
    bublSrt(deck, SIZE);
    
    //Print the array
    prntAry(deck, SIZE, 13);
    
    // Shuffle the deck 
    shuffle(deck, cards);
    
    for (int i = 0; i <= 50; i++) {
        cout << "*";
    }
    
    cout << endl;
    // The introduction
    cout << setw(37) << "Welcome to Blackjack!" << endl;
    cout << endl;
    cout << "Here are the rules:" << endl;
    
    string arr[6][2] = {"a) ", "You will be given two cards. ", 
                        "b) ", "You will see the value of the hand. ",
                        "c) ", "The program will ask you if you want to draw more cards.",
                        "d) ", "Type y for YES and n for NO. ",
                        "e} ", "You can draw only three more cards from the deck. ",
                        "f} ", "The program will display the results"} ;
              
    for(int i = 0; i < 6; i++) {
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
    cout << deck[1] << " " << deck[2] << endl;
   
    
    if (deck[1] == "A♠" || deck[1] == "A♦" || deck[1] == "A♣" || deck[1] == "A♥") {

        points += 11;

    // The cards from 2 through 9 are valued at their face value
    } else if (deck[1] == "9♠" || deck[1] == "9♦" || deck[1] == "9♣" || deck[1] == "9♥") {

        points += 9;

    } else if (deck[1] == "8♠" || deck[1] == "8♦" || deck[1] == "8♣" || deck[1] == "8♥" ) {

        points += 8;

    } else if (deck[1] == "7♠" || deck[1] == "7♦" || deck[1] == "7♣" || deck[1] == "7♥" ) {

        points += 7;

    } else if (deck[1] == "6♠" || deck[1] == "6♦" || deck[1] == "6♣" || deck[1] == "6♥") {

        points += 6;

    } else if (deck[1] == "5♠" || deck[1] == "5♦" || deck[1] == "5♣" || deck[1] == "5♥") {

        points += 5;

    } else if (deck[1] == "4♠" || deck[1] == "4♦" || deck[1] == "4♣" || deck[1] == "4♥") {

        points += 4;

    } else if (deck[1] == "3♠" || deck[1] == "3♦" || deck[1] == "3♣" || deck[1] == "3♥") {

        points += 3;

    } else if (deck[1] == "2♠" || deck[1] == "2♦" || deck[1] == "2♣" || deck[1] == "2♥") {

        points += 2;   

    // The 10, Jack, Queen, and King are all valued at 10    
    }  else if (deck[1] == "J♠" || deck[1] == "J♦" || deck[1] == "J♣" || deck[1] == "J♥" ||
               deck[1] == "Q♠" || deck[1] == "Q♦" || deck[1] == "Q♣" || deck[1] == "Q♥" ||
               deck[1] == "K♠" || deck[1] == "K♦" || deck[1] == "K♣" || deck[1] == "K♥" ||
               deck[1] == "10♠" || deck[1] == "10♦" || deck[1] == "10♣" || deck[1] == "10♥") {

        points += 10;
    }

    // Calculating points for deck[2]
    if (deck[2] == "A♠" || deck[2] == "A♦" || deck[2] == "A♣" || deck[2] == "A♥") {

        // The user chooses to count Ace as 1 or 11
        cout << "Ace can be counted as 1 or 11. ";
        cout << "Do you want to count Ace as 11? [y/n] ";
        cin >> answer;
        if (answer == 'y') points += 11;
        else points += 1;

    // The cards from 2 through 9 are valued at their face value
    } else if (deck[2] == "9♠" || deck[2] == "9♦" || deck[2] == "9♣" || deck[2] == "9♥") {

        points += 9;

    } else if (deck[2] == "8♠" || deck[2] == "8♦" || deck[2] == "8♣" || deck[2] == "8♥" ) {

        points += 8;

    } else if (deck[2] == "7♠" || deck[2] == "7♦" || deck[2] == "7♣" || deck[2] == "7♥" ) {

        points += 7;

    } else if (deck[2] == "6♠" || deck[2] == "6♦" || deck[2] == "6♣" || deck[2] == "6♥") {

        points += 6;

    } else if (deck[2] == "5♠" || deck[2] == "5♦" || deck[2] == "5♣" || deck[2] == "5♥") {

        points += 5;

    } else if (deck[2] == "4♠" || deck[2] == "4♦" || deck[2] == "4♣" || deck[2] == "4♥") {

        points += 4;

    } else if (deck[2] == "3♠" || deck[2] == "3♦" || deck[2] == "3♣" || deck[2] == "3♥") {

        points += 3;

    } else if (deck[2] == "2♠" || deck[2] == "2♦" || deck[2] == "2♣" || deck[2] == "2♥") {

        points += 2;   

    // The 10, Jack, Queen, and King are all valued at 10 
    }  else if (deck[2] == "J♠" || deck[2] == "J♦" || deck[2] == "J♣" || deck[2] == "J♥" ||
               deck[2] == "Q♠" || deck[2] == "Q♦" || deck[2] == "Q♣" || deck[2] == "Q♥" ||
               deck[2] == "K♠" || deck[2] == "K♦" || deck[2] == "K♣" || deck[2] == "K♥" ||
               deck[2] == "10♠" || deck[2] == "10♦" || deck[2] == "10♣" || deck[2] == "10♥") {

        points += 10;
    }
    
    // If points = 21 - Blackjack; the user wins
    if (points == 21) {
        
        cout << "BLACKJACK!" << endl;
        cout << "You win!";
        
    } 
    
    // Else, continue the game
    else {
        // The value of a hand is the sum of the points of card1 and deck[2]
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

            cout << deck[3] << endl;

            // Calculating points for deck[3]
            if (deck[3] == "A♠" || deck[3] == "A⬥" || deck[3] == "A♣" || deck[3] == "A♥") {

                // The user chooses to count Ace as 1 or 11
                cout << "Ace can be counted as 1 or 11. ";
                cout << "Do you want to count Ace as 11? [y/n] ";
                cin >> answer;
                if (answer == 'y') points += 11;
                else points += 1;

            // The cards from 2 through 9 are valued at their face value
            } else if (deck[3] == "9♠" || deck[3] == "9♦" || deck[3] == "9♣" || deck[3] == "9♥") {

                points += 9;

            } else if (deck[3] == "8♠" || deck[3] == "8♦" || deck[3] == "8♣" || deck[3] == "8♥" ) {

                points += 8;

            } else if (deck[3] == "7♠" || deck[3] == "7♦" || deck[3] == "7♣" || deck[3] == "7♥" ) {

                points += 7;

            } else if (deck[3] == "6♠" || deck[3] == "6♦" || deck[3] == "6♣" || deck[3] == "6♥") {

                points += 6;

            } else if (deck[3] == "5♠" || deck[3] == "5♦" || deck[3] == "5♣" || deck[3] == "5♥") {

                points += 5;

            } else if (deck[3] == "4♠" || deck[3] == "4♦" || deck[3] == "4♣" || deck[3] == "4♥") {

                points += 4;

            } else if (deck[3] == "3♠" || deck[3] == "3♦" || deck[3] == "3♣" || deck[3] == "3♥") {

                points += 3;

            } else if (deck[3] == "2♠" || deck[3] == "2♦" || deck[3] == "2♣" || deck[3] == "2♥") {

                points += 2;   

            // The 10, Jack, Queen, and King are all valued at 10 
            }  else if (deck[3] == "J♠" || deck[3] == "J♦" || deck[3] == "J♣" || deck[3] == "J♥" ||
                       deck[3] == "Q♠" || deck[3] == "Q♦" || deck[3] == "Q♣" || deck[3] == "Q♥" ||
                       deck[3] == "K♠" || deck[3] == "K♦" || deck[3] == "K♣" || deck[3] == "K♥" ||
                       deck[3] == "10♠" || deck[3] == "10♦" || deck[3] == "10♣" || deck[3] == "10♥") {

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

                    cout << deck[4] << endl;

                    if (deck[4] == "A♠" || deck[4] == "A♦" || deck[4] == "A♣" || deck[4] == "A♥") {

                        // The user chooses to count Ace as 1 or 11
                        cout << "Ace can be counted as 1 or 11. ";
                        cout << "Do you want to count Ace as 11? [y/n] ";
                        cin >> answer;
                        if (answer == 'y') points += 11;
                        else points += 1;

                    // The cards from 2 through 9 are valued at their face value
                    } else if (deck[4] == "9♠" || deck[4] == "9♦" || deck[4] == "9♣" || deck[4] == "9♥") {

                        points += 9;

                    } else if (deck[4] == "8♠" || deck[4] == "8♦" || deck[4] == "8♣" || deck[4] == "8♥" ) {

                        points += 8;

                    } else if (deck[4] == "7♠" || deck[4] == "7♦" || deck[4] == "7♣" || deck[4] == "7♥" ) {

                        points += 7;

                    } else if (deck[4] == "6♠" || deck[4] == "6♦" || deck[4] == "6♣" || deck[4] == "6♥") {

                        points += 6;

                    } else if (deck[4] == "5♠" || deck[4] == "5♦" || deck[4] == "5♣" || deck[4] == "5♥") {

                        points += 5;

                    } else if (deck[4] == "4♠" || deck[4] == "4♦" || deck[4] == "4♣" || deck[4] == "4♥") {

                        points += 4;

                    } else if (deck[4] == "3♠" || deck[4] == "3♦" || deck[4] == "3♣" || deck[4] == "3♥") {

                        points += 3;

                    } else if (deck[4] == "2♠" || deck[4] == "2♦" || deck[4] == "2♣" || deck[4] == "2♥") {

                        points += 2;   

                    // The 10, Jack, Queen, and King are all valued at 10 
                    }  else if (deck[4] == "J♠" || deck[4] == "J♦" || deck[4] == "J♣" || deck[4] == "J♥" ||
                               deck[4] == "Q♠" || deck[4] == "Q♦" || deck[4] == "Q♣" || deck[4] == "Q♥" ||
                               deck[4] == "K♠" || deck[4] == "K♦" || deck[4] == "K♣" || deck[4] == "K♥" ||
                               deck[4] == "10♠" || deck[4] == "10♦" || deck[4] == "10♣" || deck[4] == "10♥") {

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

                        cout << deck[5] << endl;

                        //Counting points for deck[5]
                        if (deck[5] == "A♠" || deck[5] == "A♦" || deck[5] == "A♣" || deck[5] == "A♥") {

                            // The user chooses to count Ace as 1 or 11
                            cout << "Ace can be counted as 1 or 11. ";
                            cout << "Do you want to count Ace as 11? [y/n] ";
                            cin >> answer;
                            if (answer == 'y') points += 11;
                            else points += 1;

                        // The cards from 2 through 9 are valued at their face value
                        } else if (deck[5] == "9♠" || deck[5] == "9♦" || deck[5] == "9♣" || deck[5] == "9♥") {

                            points += 9;

                        } else if (deck[5] == "8♠" || deck[5] == "8♦" || deck[5] == "8♣" || deck[5] == "8♥" ) {

                            points += 8;

                        } else if (deck[5] == "7♠" || deck[5] == "7♦" || deck[5] == "7♣" || deck[5] == "7♥" ) {

                            points += 7;

                        } else if (deck[5] == "6♠" || deck[5] == "6♦" || deck[5] == "6♣" || deck[5] == "6♥") {

                            points += 6;

                        } else if (deck[5] == "5♠" || deck[5] == "5♦" || deck[5] == "5♣" || deck[5] == "5♥") {

                            points += 5;

                        } else if (deck[5] == "4♠" || deck[5] == "4♦" || deck[5] == "4♣" || deck[5] == "4♥") {

                            points += 4;

                        } else if (deck[5] == "3♠" || deck[5] == "3♦" || deck[5] == "3♣" || deck[5] == "3♥") {

                            points += 3;

                        } else if (deck[5] == "2♠" || deck[5] == "2♦" || deck[5] == "2♣" || deck[5] == "2♥") {

                            points += 2;   

                        // The 10, Jack, Queen, and King are all valued at 10 
                        }  else if (deck[5] == "J♠" || deck[5] == "J♦" || deck[5] == "J♣" || deck[5] == "J♥" ||
                                   deck[5] == "Q♠" || deck[5] == "Q♦" || deck[5] == "Q♣" || deck[5] == "Q♥" ||
                                   deck[5] == "K♠" || deck[5] == "K♦" || deck[5] == "K♣" || deck[5] == "K♥" ||
                                   deck[5] == "10♠" || deck[5] == "10♦" || deck[5] == "10♣" || deck[5] == "10♥") {

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
    cout << setw(37) << "Thanks for the game!" << endl;
    for (int i = 0; i <= 50; i++) {
        cout << "*";
    }

    //Exit the Program 
    return 0;
}

// Function to generate a deck of cards
void genDeck(string deck[], int size) {
    string suits[] = {"♠", "♣", "♥", "♦"};
    string faces[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[index] = faces[j] + suits[i];
            index++;
        }
    }
}

// Function to shuffle the deck
void shuffle(string deck[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Random index from 0 to i
        swap(deck[i], deck[j]);   // Swap deck[i] with deck[j]
    }
}

string fillAry () {
    
    string face[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}, // Faces of the cards 
           suit[] = {"♠", "♣", "♥", "♦"};                                                // Suits of the cards 
    string CARDS;
    // The deck of cards
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++) {
            CARDS += face[j] + suit[i];
        }
    }
    return CARDS;
}

void prntAry(string a[], int n, int perLine) {
    
    for (int i = 0; i < n; i++) {
        cout << setw(5) << a[i] << " ";
        if (i % perLine == (perLine - 1)) cout << endl;
    }
    
}

void bublSrt(string a[], int n) {
    
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
    
}


 