/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: dianamarciniak
 *
 * Created on January 21, 2024, 9:23 PM
 */

//System Libraries 
#include <iostream> //Input-Output Library 
using namespace std;

//User Libraries
#include <iomanip>

//Global Constants - Math Physics, Chemistry, Conversions
#define lpg (0.264179)

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();
void prblm10();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    unsigned short probNum;
    
    do {
        //Initialize all variables 
        cout << endl << "This program presents a menu of options" << endl;
        cout << "Enter 1 to run Problem Gaddis_9thEd_Chap5_Prob1_Sum" << endl;
        cout << "Enter 2 to run Problem Gaddis_9thEd_Chap5_Prob7_PayInPennies" << endl;
        cout << "Enter 3 to run Problem Gaddis_9thEd_Chap5_Prob13_MinMax" << endl;
        cout << "Enter 4 to run Problem Gaddis_9thEd_Chap5_Prob22_Rectangle" << endl;
        cout << "Enter 5 to run Problem Gaddis_9thEd_Chap5_Prob23_Pattern" << endl;
        cout << "Enter 6 to run Problem Savitch_9thEd_Chap4_Prob1_MPG" << endl;
        cout << "Enter 7 to run Problem Savitch_9Ed_Chap4_Prob2_FuelEff" << endl;
        cout << "Enter 8 to run Problem Savitch_9Ed_Chap4_Prob4_Inflation" << endl;
        cout << "Enter 9 to run Problem Savitch_9Ed_Chap4_Prob5_EstCost" << endl;
        cout << "Enter 10 to run Problem Savitch_9Ed_Chap4_Prob9_2or3Max" << endl;

        cin >> probNum;

        //Process or Map solutions
        switch (probNum) {
            case 1 : prblm1(); break;
            case 2 : prblm2(); break;
            case 3 : prblm3(); break;
            case 4 : prblm4(); break;
            case 5 : prblm5(); break;
            case 6 : prblm6(); break;
            case 7 : prblm7(); break;
            case 8 : prblm8(); break;
            case 9 : prblm9(); break;
            case 10 : prblm10(); break;
        }
        
    } while (probNum >= 1 && probNum <= 10);
    
    //Display the output
    cout << endl << "End of Menu" << endl;
    
    //Exit the Program 
    return 0;
}

void prblm1() {
    
    //Declare Variables
    int sum, integer;
    
    //Initialize or input i.e. set variable values
    cout << "Enter a positive integer value" << endl;
    cin >> integer;
    sum = 0;
    
    //Map inputs -> outputs
    for (int i = 1; i <= integer; i++) {
        sum += i;
    }
    
    //Display the outputs
    cout << "Sum = " << sum;
    cout << endl;
    
}

void prblm2() {
    
    //Declare Variables
    unsigned int pyPDay; // Pay per day
    unsigned short days;
    float pySum, dollar;
    
    //Initialize or input i.e. set variable values
    cout << "Enter a number of days" << endl;
    cin >> days;
    
    pyPDay = 1; // One penny the first day 
    pySum = 0; // Sum in pennies
    
    //Map inputs -> outputs
    if (days > 0) {
        for (int i = 1; i <= days; i++) {
            pySum += pyPDay;
            pyPDay *= 2;
            dollar = pySum / 100;
        }
    }
    
    //Display the outputs
    cout << fixed << setprecision(2) << showpoint;
    cout << "Pay = $" << dollar;
    cout << endl;
    
}

void prblm3() {
    
    //Declare Variables
    int number, // Integer 
        min, // The smallest number
        max; // The biggest number
    
    //Initialize or input i.e. set variable values
    cout << "Enter a series of integers" << endl;
    cin >> number;
    min = max = number;
    
    //Map inputs -> outputs
    
        while (number != -99) {
            if (number < min) {
                min = number; 
            }
            else if (number > max) {
                max = number;
            }
            else {
                cin >> number;
            }
        }
    
    
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;
    cout << endl;
    
}

void prblm4() {
    
    //Declare Variables
    unsigned short number;
    char letter;
    
    //Initialize or input i.e. set variable values
    cout << "Enter a number and X/Y" << endl;
    cin >> number >> letter;
    
    //Map inputs -> outputs
    if (number > 0 && number <= 15) {
        
        // Letter 'X'
        if (letter == 'X') {
            for (int a = 0; a < number - 1; a++) {
                for (int b = 0; b < number; b++) {
                    cout << letter;
                }
                
            cout << endl;
        
            }
            
            for (int c = 0; c < number; c++) {
                cout << letter;
            }
        }
        // Letter 'Y'
        if (letter == 'Y') {
            for (int a = 0; a < number - 1; a++) {
                for (int b = 0; b < number; b++) {
                    cout << letter;
                }
            
            cout << endl;
        
            }
            
            for (int c = 0; c < number; c++) {
                cout << letter;
            }
        }
    }
    
    cout << endl;
}

void prblm5() {
    
    //Declare Variables
    unsigned short num;
    
    //Initialize or input i.e. set variable values
    cout << "Enter a number" << endl;
    cin >> num;
    
    //Map inputs -> outputs
    for (int a = 1; a <= 10; a++) {
        for (int b = 1; b <= a; b++) {
            cout << "+";
        }
        cout << endl << endl;
    }
    
    for (int a = 1; a <= 9; a++) {
        for (int b = 10; b >= a; b--) {
            cout << "+";
        }
        cout << endl << endl;
    }
    for (int c = 0; c < 1 ; c++) {
        cout << "+";
    }
    
    cout << endl;
}

void prblm6() {
    
    //Declare Variables
    float lOfGas, // Liters of gasoline
          miles, // The number of miles traveled by the car
          mpg; // Miles per gallon
    char answer; // Yes or No
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lOfGas;
        cout << endl;
        
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles; 
        cout << endl;
        
        cout << fixed << setprecision(2) << showpoint;
        cout << "miles per gallon:" << endl;
        mpg = miles / (lOfGas * lpg);
        cout << mpg << endl;
        
        cout << "Again:" << endl;
        cin >> answer;
        if (answer == 'y') {
            cout << endl;
        }
        
    } while (answer == 'y');
    
    cout << endl;
}

void prblm7() {
    
    //Declare Variables
    float lOfGas, // Liters of gasoline
          miles, // The number of miles traveled by the car
          mpg1, // Miles per gallon car 1
          mpg2; // Miles per gallon car 2
          
    char answer; // Yes or No
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        // Car 1
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lOfGas;
        
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles; 
        
        // Miles per gallon car 1
        cout << fixed << setprecision(2) << showpoint;
        cout << "miles per gallon: ";
        mpg1 = miles / (lOfGas * lpg);
        cout << mpg1 << endl;
        
        cout << endl;
        
        // Car 2
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> lOfGas;
        
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles; 
        
        // Miles per gallon car 2
        cout << fixed << setprecision(2) << showpoint;
        cout << "miles per gallon: ";
        mpg2 = miles / (lOfGas * lpg);
        cout << mpg2 << endl;
        
        cout << endl;
        
        // Car 1 vs. Car 2 
        if (mpg1 > mpg2) {
            cout << "Car 1 is more fuel efficient" << endl;
        } else {
            cout << "Car 2 is more fuel efficient" << endl;
        }
        
        cout << endl;
        
        // Continue: Yes or No ?
        cout << "Again:" << endl;
        cin >> answer;
        if (answer == 'y') {
            cout << endl;
        }
        
    } while (answer == 'y');
    
    cout << endl;
}

void prblm8() {
    
    //Declare Variables
    float inf, // Inflation
          cPrice, // Current price
          yaPrice; // Year-ago price
          
    char again;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        
        cout << "Enter year-ago price:" << endl;
        cin >> yaPrice;
        
        inf = (cPrice - yaPrice) / yaPrice;
        
        cout << fixed << setprecision(2) << showpoint;
        cout << "Inflation rate: " << inf * 100 << "%" << endl;
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> again;
        if (again == 'y') {
            cout << endl;
        }
        
    } while (again == 'y');
    
    cout << endl;
}

void prblm9() {
    
    //Declare Variables
    float inf, // Inflation
          cPrice, // Current price
          yaPrice, // Year-ago price
          estCost; // The estimated cost of an item 
          
    char again;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        
        cout << "Enter year-ago price:" << endl;
        cin >> yaPrice;
        
        inf = (cPrice - yaPrice) / yaPrice; // Inflation rate
        
        cout << fixed << setprecision(2) << showpoint;
        cout << "Inflation rate: " << inf * 100 << "%" << endl;
        
        cout << endl;
        
        // The estimated price of the item in one and in two years
        estCost = (inf * cPrice) + cPrice;
        cout << "Price in one year: $" << estCost << endl;
        
        cout << "Price in two year: $" << (inf * estCost) + estCost << endl;
        
        cout << endl;
        
        // Continue: Yes or No?
        cout << "Again:" << endl;
        cin >> again;
        if (again == 'y') {
            cout << endl;
        }
        
    } while (again == 'y');
    
    cout << endl;
}

void prblm10() {
    
    //Declare Variables
    float num1, num2, num3; // Input: Parameters
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << fixed << setprecision(1) << showpoint;
    
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << endl;
    
    cout << "Enter Second number:" << endl;
    cin >> num2;
    cout << endl;
    
    cout << "Enter third number:" << endl;
    cin >> num3;
    cout << endl;
    
    float max2(float num1, float num2); // Maximum of first 2 parameters
        if (num1 > num2) {
            cout << "Largest number from two parameter function:" << endl;
            cout << num1;
        };
        if (num1 < num2) {
            cout << "Largest number from two parameter function:" << endl;
            cout << num2;
        };

    cout << endl << endl;
    
    float max3(float num1, float num2, float num3); // Maximum of 3 parameters
        cout << "Largest number from three parameter function:" << endl;
        
            if (num1 > num2 && num1 > num3) {
                cout << num1;
            }
            else if (num2 > num1 && num2 > num3) {
                cout << num2;
            }
            else {
                cout << num3;
            }
        cout << endl;
        
    cout << endl;
}