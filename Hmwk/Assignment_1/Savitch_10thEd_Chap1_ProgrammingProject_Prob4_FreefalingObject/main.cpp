/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 1:51 PM
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
    int time, dist, acc;
    
    //Initialize all variables 
    acc = 32;
    
    //Process or Map solutions
    
    //Display the output
    cout << "Press return after entering a number.\n";
    cout << "Enter a time in seconds: \n"; 
    cin >> time;
    dist = (acc * time * time) / 2;
    cout << "If an object is in freefall for " << time << " seconds, it will drop at " << dist << " feet." << endl;
    
    //Exit the Program 
    return 0;
}
