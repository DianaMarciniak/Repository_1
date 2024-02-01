/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 12:37 PM
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
    unsigned short car;
    float avgTown, avgHwy, dstTown, dstHwy;
    
    //Initialize all variables
    car = 20;
    avgTown = 23.5;
    avgHwy = 28.9;
    
    //Process or Map solutions
    dstTown = car * avgTown;
    dstHwy = car * avgHwy;
    
    //Display the output
    cout << "On one tank of gas the car can travel " << dstTown 
            << " miles in town and " << dstHwy << " miles on a highway.";
    
    //Exit the Program 
    return 0;
}