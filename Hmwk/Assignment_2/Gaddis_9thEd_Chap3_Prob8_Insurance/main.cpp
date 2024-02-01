/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int repCost;
    float minIns;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    
    cin >> repCost; // The replacement cost of a building
    minIns = repCost * 0.8; // The minimum amount of insurance to buy for the building 
    
    cout << "You need $" << minIns << " of insurance.";

    //Exit stage right or left!
    return 0;
}