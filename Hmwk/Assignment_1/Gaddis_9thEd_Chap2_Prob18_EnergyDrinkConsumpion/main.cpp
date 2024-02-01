/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 12:57 PM
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
    short cstmrs;
    float drinks, citrus;
    
    //Initialize all variables 
    cstmrs = 16500; //16,500 customers in a survey
    
    //Process or Map solutions
    drinks = 0.15 * cstmrs; //15% of customers who purchase one or more energy drinks per week
    citrus = 0.58 * cstmrs; //58% of customers who prefer citrus-flavored energy drinks 
    
    //Display the output
    cout << "Customers who purchase one or more energy drinks per week: " << drinks << endl;
    cout << "Customers who prefer citrus-flavored energy drinks: " << citrus << endl;
    
    //Exit the Program 
    return 0;
}

