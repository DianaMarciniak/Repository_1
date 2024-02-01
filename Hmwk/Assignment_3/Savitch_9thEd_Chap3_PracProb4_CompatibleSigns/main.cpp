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
#include <string>

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1, sign2; // Inputs
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    string Fire[] = {"Aries", "Leo", "Sagittarius"};
    string Earth[] = {"Taurus", "Virgo", "Capricorn"};
    string Air[] = {"Gemini", "Libra", "Aquarius"};
    string Water[] = {"Scorpio", "Cancer", "Pisces"};
    
    
    //Display the outputs
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;
    
    for (int i = 0; i <= 2; i++) {
        if (sign1 == Fire[i]) {
            if (sign2 == Fire[0] || sign2 == Fire[1] || sign2 == Fire[2]) {
                cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
            } else {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
        }
        else if (sign1 == Earth[i]) {
            if (sign2 == Earth[0] || sign2 == Earth[1] || sign2 == Earth[2]) {
                cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
            } else {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
        }
        else if (sign1 == Air[i]) {
            if (sign2 == Air[0] || sign2 == Air[1] || sign2 == Air[2]) {
                cout << sign1 << " and " << sign2 << " are compatible Air signs.";
            } else {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
        }
        else if (sign1 == Water[i]) {
            if (sign2 == Water[0] || sign2 == Water[1] || sign2 == Water[2]) {
                cout << sign1 << " and " << sign2 << " are compatible Water signs.";
            } else {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
        }
    }
    

    //Exit stage right or left!
    return 0;
}
