/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 17, 2024, 7:34 PM
 * Purpose: Bar Chart
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
    int i, x, store[i];

    //Initialize all variables 
    
    //Process or Map solutions
    
    //Display the output
    
    for (int i = 1; i <= 5; i++){
        cout << "Enter today's sales for store " << i << " : "; 
        cin >> store[i];
    }
    
    cout << endl << "SALES BAR CHART (Each * = $100)" << endl;
    
    for (int i = 1; i <= 5; i++){
        cout << "Store " << i << ": ";
        for (int x = 0; x < store[i]/100; x++) {
            cout << "*";
        }
        cout << endl;
    }
    
    //Exit the Program 
    return 0;
}

