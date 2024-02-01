/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 10, 2024, 7:51 PM
 * Purpose: Template used to start all projects 
 */

//System Libraries 
#include <iostream> //Input-Output Library 
#include <iomanip> //Format Library 
using namespace std;

//User Libraries

//Global Constants - Math Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float milBdgt, //Military Budget 
          fedBdgt, //Federal Budget 
          mlPrcnt; //The military budget as a percentage of the federal budget
    
    //Initialize all variables 
    milBdgt = 6.391e11f; //Military Budget = 639.1 Billion   
    fedBdgt = 4.046e12f; //Federal Budget = 4.046 Trillion
    
    //Process or Map solutions
    mlPrcnt = milBdgt / fedBdgt * 100;
    
    //Display the output
    cout << fixed << showpoint;
    cout << "The military budget: " << setprecision(2) << mlPrcnt << " %" << endl;
    
    //Exit the Program 
    return 0;
}
