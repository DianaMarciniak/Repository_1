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
    string name1, // Runner 1
           name2, // Runner 2
           name3; // Runner 3
           
    int time1, 
        time2, 
        time3;
          
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    
    cin >>  name1 >> time1;
    cin >>  name2 >> time2;
    cin >>  name3 >> time3;

   if (time1 < 0 || time2 < 0 || time3 < 0) {
       cout << "Time has to be positive.";
   } 
   
   else {
    
    // Case 1
    if (time1 < time2 && time1 < time3 && time2 < time3) {
        cout << name1 << "\t" << setw(3) << time1 << endl;
        cout << name2 << "\t" << setw(3) << time2 << endl;
        cout << name3 << "\t" << setw(3) << time3;
    } 
    
    // Case 2
    else if (time1 < time2 && time1 < time3 && time2 > time3) {
        cout << name1 << "\t" << setw(3) << time1 << endl;
        cout << name3 << "\t" << setw(3) << time3 << endl;
        cout << name2 << "\t" << setw(3) << time2;
    }
    
    // Case 3
    else if (time2 < time1 && time2 < time3 && time1 < time3) {
        cout << name2 << "\t" << setw(3) << time2 << endl;
        cout << name1 << "\t" << setw(3) << time1 << endl;
        cout << name3 << "\t" << setw(3) << time3;
    }
    
    // Case 4
    else if (time2 < time1 && time2 < time3 && time1 > time3) {
        cout << name2 << "\t" << setw(3) << time2 << endl;
        cout << name3 << "\t" << setw(3) << time3 << endl;
        cout << name1 << "\t" << setw(3) << time1;
    }
    
    // Case 5
    else if (time3 < time1 && time3 < time2 && time1 < time2) {
        cout << name3 << "\t" << setw(3) << time3 << endl;
        cout << name1<< "\t" << setw(3) << time1 << endl;
        cout << name2 << "\t" << setw(3) << time2;
    } 
    
    // Case 6
    else if (time3 < time1 && time3 < time2 && time1 > time2) {
        cout << name3 << "\t" << setw(3) << time3 << endl;
        cout << name2 << "\t" << setw(3) << time2 << endl;
        cout << name1 << "\t" << setw(3) << time1;
    }
   }
    
    //Exit stage right or left!
    return 0;
}