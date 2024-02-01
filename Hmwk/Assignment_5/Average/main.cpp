//Create your own, properly commented and formatted.
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
#include <iomanip>

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void getScre (int &, int &, int &, int &, int &);
float calcAvg(int, int, int, int, int);
int fndLwst(int, int, int, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int a, b, c, d, e;
    float avg;
    
    //Initialize or input i.e. set variable values
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removing the lowest value." << endl;
    
    getScre (a, b, c, d, e);
    
    //Map inputs -> outputs
    cout << fixed << setprecision(1) << showpoint;
    cout << "The average test score = " << calcAvg(a, b, c, d, e) ;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

void getScre (int & a, int & b, int & c, int & d, int & e) {
    
    cout << "Input the 5 test scores." << endl;
    cin >> a >> b >> c >> d >> e;
    
}

float calcAvg(int a, int b, int c, int d, int e) {
    
    float avg;
    avg = (a + b + c + d + e) / 5;
    
    return (a + b + c + d + e - fndLwst(a, b, c, d, e)) / 4.0f;
}
int fndLwst(int a, int b, int c, int d, int e) {
    
    int lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;
    if (d < lowest) lowest = d;
    if (e < lowest) lowest = e;
    
    return lowest;
    
}