/* 
 * Author: Diana Marciniak
 * Created on Jan 28 7:03 PM
 * Purpose: MinMax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int min, // The min of 3 integers
        max, // The max of 3 integers
        number1, 
        number2, 
        number3;
    
    //Initialize Variables
    cout << "Input 3 numbers" << endl;
    cin >> number1 >> number2 >> number3;
    
    //Process/Map inputs to outputs
    minmax (number1, number2, number3, min, max);
    
    //Output data
    cout << "Min = " << min << endl;
    cout << "Max = " << max;
    
    //Exit stage right!
    return 0;
}

void minmax(int num1, int num2, int num3, int& min,int& max) {
    
    if (num1 < num2 && num1 < num3) {
        min = num1; // Number 1 is the min
    }
    else if (num2 < num1 && num2 < num3) {
        min = num2; // Number 2 is the min
    }
    else {
        min = num3; // Number 3 is the min
    }
    
    if (num1 > num2 && num1 > num3) {
        max = num1; // Number 1 is the max
    }
    else if (num2 > num1 && num2 > num3) {
        max = num2; // Number 2 is the max
    }
    else {
        max = num3; // Number 3 is the max
    }
    
}