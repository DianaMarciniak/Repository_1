/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 1:36 PM
 * Purpose: Template used to start all projects 
 */

//System Libraries 
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries

//Global Constants - Math Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    int qtr, dime, ni, coins;
    
    //Initialize all variables 
    
    
    //Process or Map solutions
    
    //Display the output
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters: \n";
    cin >> qtr;
    cout << "Enter the number of dimes: \n";
    cin >> dime;
    cout << "Enter the number of nickels: \n";
    cin >> ni;
    
    coins = 25 * qtr + 10 * dime + 5 * ni;
    
    cout << "The coins are worth: " << coins << endl;
    
    //Exit the Program 
    return 0;
}
