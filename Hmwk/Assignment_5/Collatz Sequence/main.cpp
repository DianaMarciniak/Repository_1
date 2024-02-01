/* 
 * Author: Diana Marciniak 
 * Created on Jan 30 8:02
 * Purpose: Collatz Sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n, result;
    
    //Initialize Variables
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> n;
    
    //Process/Map inputs to outputs
    
    cout << "Sequence start of " << n << " cycles to 1 in " <<
            collatz(n) << " steps";
    
    //Output data
   
    
    //Exit stage right!
    return 0;
}

int collatz (int a) {
    
    unsigned int count = 1;
    
    do {
        if (a % 2 == 0) {
            a /= 2;
            
        }
        else {
            a *= 3;
            a += 1;
            
        }
        count++;
        
    } while (a > 1);
    
    return count;
}