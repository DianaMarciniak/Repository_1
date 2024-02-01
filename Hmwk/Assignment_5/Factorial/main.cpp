 /* 
 * Author: Diana Marciniak
 * Created on Jan 28 2024 11:57 PM
 * Purpose: Factorial
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,
        result;
    
    //Initialize Variables
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    cin >> n;
    
    //Process/Map inputs to outputs
    result = fctrl(n);
    
    //Output data
    cout << n << "! = " << fctrl(n);
    
    //Exit stage right!
    return 0;
}

int fctrl (int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
