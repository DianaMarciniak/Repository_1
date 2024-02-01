// Use a template and properly format with comments, etc....
/* 
 * File: main.cpp
 * Author: Diana Marciniak
 * Created on Jan 31 2024
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
#include <cmath> 
#include <iomanip>

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal (float, float, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float fValue, // Future value 
          pValue, // Present value
          x,
          intRate; // Interest rate
          
    int years;
    
    //Initialize or input i.e. set variable values
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin >> fValue;
    
    cout << "Input the Number of Years" << endl;
    cin >> years;
    
    cout << "Input the Interest Rate %/yr" << endl;
    cin >> intRate;
    
    //Map inputs -> outputs
    pValue = psntVal(fValue, intRate, years);
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "The Present Value = $" << pValue;

    //Exit stage right or left!
    return 0;
}

float psntVal (float fValue, float intRate, int years) {
    
    return fValue / pow(1 + intRate * 0.01f, years);
    
} 