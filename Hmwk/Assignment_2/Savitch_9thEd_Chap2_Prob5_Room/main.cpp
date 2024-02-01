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
    int roomCap, // The maximum room capacity
        numPpl; // The number of people attending the meeting
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> roomCap >> numPpl;
    
    
    //Display the outputs
    cout << "Input the maximum room capacity and the number of people" << endl;
    
    if (numPpl <= roomCap) {
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << roomCap - numPpl << " will be allowed without violation.";
    } else {
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << numPpl - roomCap << " to avoid fire violation.";
    }

    //Exit stage right or left!
    return 0;
}