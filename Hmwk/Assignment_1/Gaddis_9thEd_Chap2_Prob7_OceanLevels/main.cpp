/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 2:08 PM
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
    float In5y, In7y, In10y;
    
    //Initialize all variables 
    
    //Process or Map solutions
    In5y = 5 * 1.5; // The number of millimeters higher than the current level that the ocean's level will be in 5 years.
    In7y = 7 * 1.5; // The number of millimeters higher than the current level that the ocean's level will be in 7 years.
    In10y = 10 * 1.5; // The number of millimeters higher than the current level that the ocean's level will be in 10 years.
    
    //Display the output
    cout << "The ocean level will be higher by " << In5y << " millimeters in 5 years." << endl;
    cout << "The ocean level will be higher by " << In7y << " millimeters in 7 years." << endl;
    cout << "The ocean level will be higher by " << In10y << " millimeters in 10 years." << endl;
    
    //Exit the Program 
    return 0;
}
