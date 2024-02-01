/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 12:45 PM
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
    unsigned short oneA; 
    int numA;
    
    //Initialize all variables 
    oneA = 43560; //One acre = 43,560 square feet
    
    //Process or Map solutions
    numA = 391876 / oneA; //The number of acres in a tract of land with 391,876 square feet
    
    //Display the output
    cout << "The number of acres in a tract of land with 391,876 square feet is " << numA << "." << endl;
   
    //Exit the Program 
    return 0;
}
