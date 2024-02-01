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
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cels, fhr;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << fixed;
    
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> fhr; // Input: Degrees Fahrenheit
    
    cels = 5 * (fhr - 32) / 9; // Coverting Fahrenheit temperatures to Celsius temperatures using the formula: Celcius = 5 / 9 (Fahrenheit - 32)
    
    cout << setprecision(1) << fhr << " Degrees Fahrenheit = " 
         << setprecision(1) << cels << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}