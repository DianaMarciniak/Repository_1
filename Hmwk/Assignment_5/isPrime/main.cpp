/* 
 * Author: Diana Marciniak
 * Created on Jan 30 4:11 PM
 * Purpose: isPrime
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include <cmath> //For the sqrt function

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    
    //Initialize Variables
    cout << "Input a number to test if Prime." << endl;
    cin >> number;
    
    //Process/Map inputs to outputs
    string msg = isPrime(number) ? " is prime." : " is not prime.";
    
    //Output data
    cout << number << msg;
    
    //Exit stage right!
    return 0;
}

bool isPrime (int number) {
    
    if (number <= 0) return false;
    
    int nsqrt = sqrt (number);
    
    for (int i = 2; i <= nsqrt; i++) {
        if (number % i == 0) return false;
    }
    return true;
}
