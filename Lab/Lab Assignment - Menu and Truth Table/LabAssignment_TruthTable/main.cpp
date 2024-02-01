/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on Jan 17 2024 6:18 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries
#include <iomanip>

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Heading
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y" << endl << endl;
    
    //Row 1
    x = true;
    y = true;
    
    cout << (x ? 'T' : 'F');
    cout << setw(2) << (y ? 'T' : 'F');
    cout << setw(3) << (!x ? 'T' : 'F');
    cout << setw(3) << (!y ? 'T' : 'F');
    cout << setw(4) << (x&&y ? 'T' : 'F');
    cout << setw(5) << (x||y ? 'T' : 'F');
    cout << setw(4) << (x^y ? 'T' : 'F');
    cout << setw(5) << (x^y^x ? 'T' : 'F');
    cout << setw(6) << (x^y^y ? 'T' : 'F');
    cout << setw(8) << (!(x&&y) ? 'T' : 'F');
    cout << setw(7) << (!x||!y ? 'T' : 'F');
    cout << setw(8) << (!(x||y) ? 'T' : 'F');
    cout << setw(7) << (!x&&!y ? 'T' : 'F');
   
    cout << endl;
            
    //Row 2
    x = true;
    y = false;
    
    cout << (x ? 'T' : 'F');
    cout << setw(2) << (y ? 'T' : 'F');
    cout << setw(3) << (!x ? 'T' : 'F');
    cout << setw(3) << (!y ? 'T' : 'F');
    cout << setw(4) << (x&&y ? 'T' : 'F');
    cout << setw(5) << (x||y ? 'T' : 'F');
    cout << setw(4) << (x^y ? 'T' : 'F');
    cout << setw(5) << (x^y^x ? 'T' : 'F');
    cout << setw(6) << (x^y^y ? 'T' : 'F');
    cout << setw(8) << (!(x&&y) ? 'T' : 'F');
    cout << setw(7) << (!x||!y ? 'T' : 'F');
    cout << setw(8) << (!(x||y) ? 'T' : 'F');
    cout << setw(7) << (!x&&!y ? 'T' : 'F');
    
    cout << endl;
    
    //Row 3
    x = false;
    y = true;
    
    cout << (x ? 'T' : 'F');
    cout << setw(2) << (y ? 'T' : 'F');
    cout << setw(3) << (!x ? 'T' : 'F');
    cout << setw(3) << (!y ? 'T' : 'F');
    cout << setw(4) << (x&&y ? 'T' : 'F');
    cout << setw(5) << (x||y ? 'T' : 'F');
    cout << setw(4) << (x^y ? 'T' : 'F');
    cout << setw(5) << (x^y^x ? 'T' : 'F');
    cout << setw(6) << (x^y^y ? 'T' : 'F');
    cout << setw(8) << (!(x&&y) ? 'T' : 'F');
    cout << setw(7) << (!x||!y ? 'T' : 'F');
    cout << setw(8) << (!(x||y) ? 'T' : 'F');
    cout << setw(7) << (!x&&!y ? 'T' : 'F');
    
    cout << endl;
    
    //Row 4
    x = false;
    y = false;       
    
    cout << (x ? 'T' : 'F');
    cout << setw(2) << (y ? 'T' : 'F');
    cout << setw(3) << (!x ? 'T' : 'F');
    cout << setw(3) << (!y ? 'T' : 'F');
    cout << setw(4) << (x&&y ? 'T' : 'F');
    cout << setw(5) << (x||y ? 'T' : 'F');
    cout << setw(4) << (x^y ? 'T' : 'F');
    cout << setw(5) << (x^y^x ? 'T' : 'F');
    cout << setw(6) << (x^y^y ? 'T' : 'F');
    cout << setw(8) << (!(x&&y) ? 'T' : 'F');
    cout << setw(7) << (!x||!y ? 'T' : 'F');
    cout << setw(8) << (!(x||y) ? 'T' : 'F');
    cout << setw(7) << (!x&&!y ? 'T' : 'F');
    
    //Exit the Program
    return 0;
}
