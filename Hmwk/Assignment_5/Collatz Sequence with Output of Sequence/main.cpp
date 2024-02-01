/* 
 * Author: Diana Marciniak
 * Created on Jan 31 2024 10:48
 * Purpose: Collatz Sequence with Output of Sequence
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
    int n, ns;
    
    //Initialize Variables
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> n;
    cout << n;
    
    //Process/Map inputs to outputs
    ns = collatz(n);
    
    //Output data
    cout << "Sequence start of " << n << " cycles to 1 in " <<
            ns << " steps";
    
    //Exit stage right!
    return 0;
}

int collatz (int a) {
    
    unsigned int count = 1;
    
    do {
        cout << ", ";
        if (a % 2 == 0) {
            a /= 2;
            
        }
        else {
            a *= 3;
            a += 1;
            
        }
        cout << a;
        count++;
        
    } while (a > 1);
    cout << endl;
    
    return count;
}