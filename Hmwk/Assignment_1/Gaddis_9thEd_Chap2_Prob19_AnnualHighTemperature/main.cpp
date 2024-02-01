/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 1:14 PM
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
    float nyc, denver, phoenix;
    
    //Initialize all variables 
    
    //Process or Map solutions
    nyc = 1.02 * 85; //Average temperature in July in NYC, when raised by 2%
    denver = 1.02 * 88; //Average temperature in July in Denver, when raised by 2%
    phoenix = 1.02 * 106; //Average temperature in July in Phoenix, when raised by 2%
    
    //Display the output
    cout << "When raised by 2%, the average temperature is: \n"
            << nyc << " degrees in NYC \n" 
            << denver << " degrees in Denver \n" 
            << phoenix << " degrees in Phoenix" << endl;
           
    //Exit the Program 
    return 0;
}
