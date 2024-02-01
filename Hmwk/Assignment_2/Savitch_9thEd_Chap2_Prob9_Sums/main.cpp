/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Format Libray 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short int x, sumPos, sumNeg;
    
    //Initialize or input i.e. set variable values
    sumPos = sumNeg = 0;
    
    //Map inputs -> outputs
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    cin >> x;
    sumPos += x > 0 ? x : 0;
    sumNeg += x < 0 ? x : 0;
    
    //Display the outputs
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    cout << "Negative sum = " << setw(3) << sumNeg << endl;
    cout << "Positive sum = " << setw(3) << sumPos << endl;
    cout << "Total sum    = " << setw(3) << sumPos + sumNeg;

    //Exit stage right or left!
    return 0;
}