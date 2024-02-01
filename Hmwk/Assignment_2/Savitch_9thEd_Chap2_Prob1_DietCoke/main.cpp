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
    int Wd, //  The weight at which the dieter will stop dieting in lbs
                   numCans; // The number of cans it is possible to drink without dying as a result
    
    const int Mm = 35, // The mass of the mouse in g
                         Mkm = 5, // The mass of the sweetner that killed the mouse in g
                         Mc = 350; // The mass of a can of coke in g
    const float Cs = 0.001f, // Concentration of the sweetner 
                C = 453.592f; // Concentration in g/lbs
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> Wd; // Input: the desired dieters weight in lbs
    
    numCans = (Wd * C * Mkm) / (Mc * Cs * Mm);
    
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << numCans << " cans";

    //Exit stage right or left!
    return 0;
}