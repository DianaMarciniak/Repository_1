/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pAnSal; // An employee’s previous annual salary
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> pAnSal;
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    
    cout << "Input previous annual salary." << endl;
    cout << setw(15) << "Retroactive pay" << setw(7) << "= $" << setw(7) << pAnSal / 2 * 0.076 << endl;
    cout << setw(15) << "New annual salary" << setw(5) << "= $" << setw(7) << pAnSal * 1.076 << endl;
    cout << setw(15) << "New monthly salary" << setw(4) << "= $" << setw(7) << pAnSal / 12 * 1.076;

    //Exit stage right or left!
    return 0;
}