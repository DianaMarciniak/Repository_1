//Create your own template, properly commented, spaced, etc....
/* 
 * File: main.cpp
 * Author: Diana Marciniak
 * Created on Jan 31 2024 10:49 AM
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
void input (int&, int&);
int convert (int&, int&, char);
void output (char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int hours, minutes;
    char period, another;
    
    //Initialize or input i.e. set variable values
    cout << "Military Time Converter to Standard Time" << endl;
    cout << "Input Military Time hh:mm" << endl;
    
    do {
        
        input (hours, minutes);
        hours = convert (hours, minutes, period);
        output (another);
        cin >> another;
        
    } while (another == 'y' || another == 'Y');
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

void input (int& hours, int& minutes) {
    
    char colon;
    cin >> hours;
    cin >> colon;
    cin >> minutes;
    
}

int convert (int& hours, int& minutes, char period) {
    
    if (hours == 0) cout << "00";
    else cout << hours;
    
    cout << ":" << minutes;
    
    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59) {
        
        
        if (hours >= 12) {
            period = 'P';
            if (hours > 12) {
                hours -= 12;
            }
        } else {
            period = 'A';
            if (hours == 0) {
                hours = 12;
            }
        }
        
        cout << " = " << hours << ":";
        
        if (minutes == 0) cout << "00";
        else cout << minutes;
        
        cout << " " << period << "M" << endl;
        
    } else {
        cout << " is not a valid time" << endl;
    }
    return hours;
}

void output (char another) {
    
    cout << "Would you like to convert another time (y/n)" << endl;
}
