/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float deg, angle, PI;
    
    //Initialize or input i.e. set variable values
    PI = atan(1) * 4;
    
    //Map inputs -> outputs
    
    //Display the outputs
    
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> angle; // Input: angle in degrees
    
    deg = angle * PI / 180; // Converting radians to degrees
    
    cout << fixed << setprecision(4) << showpoint;
    cout << "sin(" << (int)angle << ") = " << sin(deg) << endl;
    cout << "cos(" << (int)angle << ") = " << cos(deg) << endl;
    cout << "tan(" << (int)angle << ") = " << tan(deg);

    //Exit stage right or left!
    return 0;
}