/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 * Created on January 3, 2024, 12:14 PM
 * Purpose: Template used to start all projects 
 */

//System Libraries 
#include <iostream> //Input-Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math Physics, Chemistry, Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    float bill, tax, total, tip;
    
    //Initialize all variables 
    bill = 88.67; //The meal costs $88.67 
    
    //Process or Map solutions
    tax = 0.0675 * bill; //The tax is 6.75% of the meal cost
    total = bill + tax; //Total bill with tax 
    tip = 0.2 * total; //The tip is 20% of the total bill
    
    //Display the output
    cout << "The meal cost: $" << bill << endl;
    cout << "Tax amount: $" << setprecision(3) << tax << endl;
    cout << "Tip amount: $" << setprecision(4) << tip << endl;
    cout << "Total bill: $" << setprecision(4) << total << endl;
            
    //Exit the Program 
    return 0;
}
