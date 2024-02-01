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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int hour,
                 minutes, 
                 wTime, // Input: waiting time
                 timeAWh, // Time after waiting: Hours
                 timeAWm; // Time after waiting: Minutes
                 
    unsigned char period, // AM or PM
                  again;
    
    //Initialize or input i.e. set variable values
    do {
        cout << "Enter hour:" << endl;
        cin >> hour;
        cout << endl;
        
        cout << "Enter minutes:" << endl;
        cin >> minutes;
        cout << endl;
        
        cout << "Enter A for AM, P for PM:" << endl;
        cin >> period;
        cout << endl;
        
        cout << "Enter waiting time:" << endl;
        cin >> wTime;
        cout << endl;
        
        //Map inputs -> outputs
        if (hour > 12) {
            hour -= 12;
        }

        timeAWh = (minutes + wTime) / 60;
        timeAWm = (minutes + wTime) % 60;
        
        //Display the outputs
        cout << "Current time = ";
        if (hour < 10) cout << "0"; 
        if (minutes < 10) cout << "0";
        cout << hour << ":" << minutes << " " << period << "M" << endl;
        
        cout << "Time after waiting period = ";
        if (timeAWh + hour > 12) {
            if (timeAWh + hour - 12 < 10) cout << "0" << timeAWh + hour - 12 << ":";
            else cout << timeAWh + hour - 12 << ":";
            if (timeAWm < 10)
            cout << "0" << timeAWm;
            
            // Switch AM and PM
            if (period == 'A') {
                cout << " PM" << endl;
            }
            else {
                cout << " AM" << endl;
            }
        } 
        else if (timeAWh + hour < 10) {
            cout << "0" << timeAWh + hour << ":" << timeAWm << " " << period << "M" << endl;
        }
        else {
            cout << timeAWh + hour << ":" << timeAWm << " " << period << "M" << endl;
        }
        
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> again;
        if (again == 'y') cout << endl;
        
    } while (again == 'y');

    //Exit stage right or left!
    return 0;
}