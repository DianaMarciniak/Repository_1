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
#include <iomanip>
#include <cstring>

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int book;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    if (book == 0) {
        points = 0;
    }
    else if (book == 1) {
        points = 5;
    }
    else if (book == 2) {
        points = 15;
    }
    else if (book == 3) {
        points = 30;
    }
    else {
        points = 60;
    }
    
    
    //Display the outputs
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> book;
   
    cout << "Books purchased" << setw(3) << " = " << setw(2) << book << endl;
    cout << "Points earned" << setw(5) << " = " << setw(2) << points;

    //Exit stage right or left!
    return 0;
}