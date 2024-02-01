/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    
    cin >> name1 >> name2 >> name3;
    
    // Case 1
    if (name1 < name2 && name1 < name3 && name2 < name3) {
    cout << name1 << endl;
    cout << name2 << endl; 
    cout << name3;
    }
    
    // Case 2
    else if (name1 < name2 && name1 < name3 && name2 > name3) {
    cout << name1 << endl;
    cout << name3 << endl;
    cout << name2;
    }
    
    // Case 3
    else if (name2 < name1 && name2 < name3 && name1 < name3) {
    cout << name2 << endl;
    cout << name1 << endl;
    cout << name3;
    }
    
    // Case 4
    else if (name2 < name1 && name2 < name3 && name1 > name3) {
    cout << name2 << endl;
    cout << name3 << endl;
    cout << name1;
    }
    
    // Case 5
    else if (name3 < name1 && name3 < name2 && name1 < name2) {
    cout << name3 << endl; 
    cout << name1 << endl; 
    cout << name2;
    }
    
    // Case 6
    else {
    cout << name3 << endl;
    cout << name2 << endl;
    cout << name1;
    }
    
    
    //Exit stage right or left!
    return 0;
}