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
    float avg, score1, score2, score3, score4, score5;
    
    //Initialize or input i.e. set variable values
    cout << fixed;
    
    //Map inputs -> outputs
    cout << "Input 5 numbers to average." << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    avg = (score1 + score2 + score3 + score4 + score5) / 5.0;
    
    //Display the outputs
    cout << "The average = " << setprecision(1) << avg;

    //Exit stage right or left!
    return 0;
}