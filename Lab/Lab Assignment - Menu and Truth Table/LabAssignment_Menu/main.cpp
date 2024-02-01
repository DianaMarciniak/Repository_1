/* 
 * File:   main.cpp
 * Author: Diana Marciniak
 * Created on Jan 17 2024 2:24 PM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries
#include <cstring>
#include <iomanip>

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    // 1
    string name1, name2, name3; // Input: three names
    
    // 2
    int book; // The number of books that he or she has purchased this month
    
    // 3
    float bal, // The beginning balance
          chckFee, // Check Fee
          nBal, // New Balance
          mFee, // Monthly Fee
          lowBal; // Low Balance
          
    int checks; // The number of checks written
    
    // 4
    string runner1, // Runner 1
           runner2, // Runner 2
           runner3; // Runner 3
           
    int time1, // Time - Runner 1
        time2, // Time - Runner 2
        time3; // Time - Runner 3
    
    // 5
    char pack;
    unsigned short hours;
    const unsigned short lim = 774;
    float billA,
          billB,
          billC;
    
    // 6
    char p1, p2;
    string mssg;
    
    // 7
    unsigned short x; //4 digit number between 1000, 3000
    unsigned char n1000, // Number of 1000's
                   n100, //Number of 100's
                    n10, //Number of 10's
                     n1; //Number of 1's
    string msg; // Message
    
    // 8
    string sign1, sign2; // Inputs
    string Fire[] = {"Aries", "Leo", "Sagittarius"};
    string Earth[] = {"Taurus", "Virgo", "Capricorn"};
    string Air[] = {"Gemini", "Libra", "Aquarius"};
    string Water[] = {"Scorpio", "Cancer", "Pisces"};
    
    do {
    //Initialize Variables
        cout << endl << "This program presents a menu of options" << endl;
        cout << "1 To run Problem Gaddis 9thEd Chap4 Prob8 SortNames" << endl;
        cout << "2 To run Problem Gaddis 9thEd Chap4 Prob11 Books" << endl;
        cout << "3 To run Problem Gaddis 9thEd Chap4 Prob12 BankCharges" << endl;
        cout << "4 To run Problem Gaddis 9thEd Chap4 Prob14 Race" << endl;
        cout << "5 To run Problem Gaddis 9thEd Chap4 Prob23 ISP" << endl;
        cout << "6 To run Problem Savitch 9thEd Chap3 PracProb1 RockPaperScissors" << endl;
        cout << "7 To run Problem Savitch 9thEd Chap3 Prob3 RomanConversion" << endl;
        cout << "8 To run Problem Savitch 9thEd Chap3 PracProb4 CompatibleSigns" << endl;
        cin >> chose;
    
    //Map/Process the Inputs -> Outputs
    
        switch (chose) {
            case '1':cout << endl << "You are in Gaddis 9thEd Chap4 Prob8" << endl; 

                //Display the outputs
                cout << "Sorting Names" << endl;
                cout << "Input 3 names" << endl;

                cin >> name1 >> name2 >> name3;

                // Case 1
                if (name1 < name2 && name1 < name3 && name2 < name3) {
                cout << name1 << endl;
                cout << name2 << endl; 
                cout << name3 << endl;
                }

                // Case 2
                else if (name1 < name2 && name1 < name3 && name2 > name3) {
                cout << name1 << endl;
                cout << name3 << endl;
                cout << name2 << endl;
                }

                // Case 3
                else if (name2 < name1 && name2 < name3 && name1 < name3) {
                cout << name2 << endl;
                cout << name1 << endl;
                cout << name3 << endl;
                }

                // Case 4
                else if (name2 < name1 && name2 < name3 && name1 > name3) {
                cout << name2 << endl;
                cout << name3 << endl;
                cout << name1 << endl;
                }

                // Case 5
                else if (name3 < name1 && name3 < name2 && name1 < name2) {
                cout << name3 << endl; 
                cout << name1 << endl; 
                cout << name2 << endl;
                }

                // Case 6
                else {
                cout << name3 << endl;
                cout << name2 << endl;
                cout << name1 << endl;
                }

            break;

            case '2':cout << endl << "You are in Gaddis 9thEd Chap4 Prob11" << endl; 

                //Display the outputs
                cout << "Book Worm Points" << endl;
                cout << "Input the number of books purchased this month." << endl;
                cin >> book;

                // If a customer purchases 0 books
                if (book == 0) {
                    cout << setw(15) << "Books purchased" << setw(1) 
                            << " = " << setw(2) << "0" << endl;
                    cout << setw(13) << "Points earned" << setw(5) 
                            << " = " << setw(2) << "0" << endl;
                }

                // If a customer purchases 1 book
                else if (book == 1) {
                    cout << setw(15) << "Books purchased" << setw(1) 
                            << " = " << setw(2) << "1" << endl;
                    cout << setw(13) << "Points earned" << setw(5) 
                            << " = " << setw(2) << "5" << endl;
                }

                // If a customer purchases 2 books 
                else if (book == 2) {
                    cout << setw(15) << "Books purchased" << setw(1) 
                            << " = " << setw(2) << "2" << endl;
                    cout << setw(13) << "Points earned" << setw(5) 
                            << " = " << setw(2) << "15" << endl;
                }

                // If a customer purchases 3 books
                else if (book == 3) {
                    cout << setw(15) << "Books purchased" << setw(1) 
                            << " = " << setw(2) << "3" << endl;
                    cout << setw(13) << "Points earned" << setw(5) 
                            << " = " << setw(2) << "30" << endl;
                }

                // If a customer purchases 4 or more books
                else {
                    cout << setw(15) << "Books purchased" << setw(1) 
                            << " = " << setw(2) << book << endl;
                    cout << setw(13) << "Points earned" << setw(5) 
                            << " = " << setw(2) << "60" << endl;
                }

            break;

            case '3':cout << endl << "You are in Gaddis 9thEd Chap4 Prob12" << endl; 

                    cout << fixed << setprecision(2) << showpoint;

                    cout << "Monthly Bank Fees" << endl;
                    cout << "Input Current Bank Balance and Number of Checks" << endl;
                    cin >> bal >> checks;

                    if (bal < 0) {
                        cout << "The account is overdrawn." << endl;
                    }

                    if (checks < 20) {
                        chckFee = checks * 0.1f;
                    } 
                    else if (checks >= 20 && checks <= 39) {
                        chckFee = checks * 0.08f;
                    }
                    else if (checks >= 40 && checks <= 59) {
                        chckFee = checks * 0.06f;
                    }
                    else if (checks >= 60) {
                        chckFee = checks * 0.04f;
                    }

                    if (bal < 400) {
                        lowBal = 15.00f;
                    } 
                    else {
                        lowBal = 0;
                    }

                    nBal = bal - chckFee - mFee - lowBal;
                    mFee = 10.00f; // Monthly Fee

                    cout << "Balance     $" << setw(9) << bal << endl;
                    cout << "Check Fee   $" << setw(9) << chckFee << endl;
                    cout << "Monthly Fee $" << setw(9) << mFee << endl;
                    cout << "Low Balance $" << setw(9) << lowBal << endl;
                    cout << "New Balance $" << setw(9) << nBal << endl;

            break;

            case '4':cout << endl << "You are in Gaddis 9thEd Chap4 Prob14" << endl; 

                    //Display the outputs
                    cout << "Race Ranking Program" << endl;
                    cout << "Input 3 Runners" << endl;
                    cout << "Their names, then their times" << endl;

                    cin >>  runner1 >> time1;
                    cin >>  runner2 >> time2;
                    cin >>  runner3 >> time3;

                   if (time1 < 0 || time2 < 0 || time3 < 0) {
                       cout << "Time has to be positive."<< endl;
                   } 

                   else {

                    // Case 1
                    if (time1 < time2 && time1 < time3 && time2 < time3) {
                        cout << runner1 << "\t" << setw(3) << time1 << endl;
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                    } 

                    // Case 2
                    else if (time1 < time2 && time1 < time3 && time2 > time3) {
                        cout << runner1 << "\t" << setw(3) << time1 << endl;
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                    }

                    // Case 3
                    else if (time2 < time1 && time2 < time3 && time1 < time3) {
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                        cout << runner1 << "\t" << setw(3) << time1 << endl;
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                    }

                    // Case 4
                    else if (time2 < time1 && time2 < time3 && time1 > time3) {
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                        cout << runner1 << "\t" << setw(3) << time1 << endl;
                    }

                    // Case 5
                    else if (time3 < time1 && time3 < time2 && time1 < time2) {
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                        cout << runner1<< "\t" << setw(3) << time1 << endl;
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                    } 

                    // Case 6
                    else if (time3 < time1 && time3 < time2 && time1 > time2) {
                        cout << runner3 << "\t" << setw(3) << time3 << endl;
                        cout << runner2 << "\t" << setw(3) << time2 << endl;
                        cout << runner1 << "\t" << setw(3) << time1 << endl;
                    }
                   }

            break;

            case '5':cout << endl << "You are in Gaddis 9thEd Chap4 Prob23" << endl; 

                //Display the outputs
                cout << "ISP Bill" << endl;
                cout << "Input Package and Hours" << endl;
                cin >> pack >> hours;

                billA = 9.95f + (hours - 10) * 2;
                billB = 14.95f + (hours - 20);
                billC = 19.95f;

                cout << fixed << setprecision(2) << showpoint;

                if (hours < lim) {
                    if (pack == 'A') {
                        if (hours <= 10) {
                            cout << "Bill = $ 9.95";
                        } else {
                            cout << "Bill = $ " << billA << endl;
                        } 
                    } 
                    else if (pack == 'B') {
                        if (hours <= 20) {
                            cout << "Bill = $ 14.95";
                        } else {
                            cout << "Bill = $ " << billB << endl;
                        }
                    }
                    else if (pack == 'C') {
                        cout << "Bill = $ 19.95" << endl;
                    }
                }

            break;

            case '6':cout << endl << "You are in Savitch 9thEd Chap3 PracProb1" << endl; 

                //Display the outputs
                cout << "Rock Paper Scissors Game" << endl;
                cout << "Input Player 1 and Player 2 Choices" << endl;

                //Initialize or input i.e. set variable values
                cin >> p1 >> p2;
                p1 -= p1 >= 97 ? 32 : 0; // Lower case conversion
                p2 -= p2 >= 97 ? 32 : 0; 
                mssg = "Nothing";

                //Map inputs -> outputs
                mssg = p1 == p2 ? "Nobody wins." : mssg;

                if (p1 == 'R' ){
                    if (p2 == 'P') mssg = "Paper covers rock.";
                    if (p2 == 'S') mssg = "Rock breaks scissors.";
                } else if (p1 == 'P'){
                    if (p2 == 'R') mssg = "Paper covers rock.";
                    if (p2 == 'S') mssg = "Scissors cuts paper.";
                } else if (p1 == 'S'){ 
                    if (p2 == 'R') mssg = "Rock breaks scissors.";
                    if (p2 == 'P') mssg = "Scissors cuts paper.";
                }

                 cout << mssg << endl;

            break;

            case '7':cout << endl << "You are in Savitch 9thEd Chap3 Prob3" << endl; 

                //Map inputs -> outputs
                cout << "Arabic to Roman numeral conversion." << endl;
                cout << "Input the integer to convert." << endl;
                
                cin >> x;
                msg = "";

                if (x < 1000 || x > 3000) {
                    msg = " is Out of Range!";
                } else {
                    n1 = (x) % 10; 
                    n10 = (x / 10) % 10; 
                    n100 = (x / 100) % 10;
                    n1000 = (x / 1000);

                    //Code for outputting Roman Numerals in the 1000's
                    switch (n1000){
                    case 3 : msg += "M";
                    case 2 : msg += "M";
                    case 1 : msg += "M";
                    };

                    //Code for outputting Roman Numerals in the 100's
                    msg += n100 == 9 ? "CM":
                           n100 == 8 ? "DCCC":
                           n100 == 7 ? "DCC":
                           n100 == 6 ? "DC":
                           n100 == 5 ? "D":
                           n100 == 4 ? "CD":
                           n100 == 3 ? "CCC":
                           n100 == 2 ? "CC":
                           n100 == 1 ? "C": "";

                    //Code for outputting Roman Numerals in the 10's
                    if (n10 == 9) msg += "XC";
                    if (n10 == 8) msg += "LXXX";
                    if (n10 == 7) msg += "LXX";
                    if (n10 == 6) msg += "LX";
                    if (n10 == 5) msg += "L";
                    if (n10 == 4) msg += "XL";
                    if (n10 == 3) msg += "XXX";
                    if (n10 == 2) msg += "XX";
                    if (n10 == 1) msg += "X";

                    //Code for outputting Roman Numerals in the 1's
                    if (n1 == 9) msg += "IX";
                    else if (n1 == 8) msg += "VIII";
                    else if (n1 == 7) msg += "VII";
                    else if (n1 == 6) msg += "VI";
                    else if (n1 == 5) msg += "V";
                    else if (n1 == 4) msg += "IV";
                    else if (n1 == 3) msg += "III";
                    else if (n1 == 2) msg += "II";
                    else if (n1 == 1) msg += "I";

                    msg = " is equal to " + msg;
                }

                cout << x << msg << endl;

            break;

            case '8':cout << endl << "You are in Savitch 9thEd Chap3 PracProb4" << endl; 

                //Display the outputs
                cout << "Horoscope Program which examines compatible signs." << endl;
                cout << "Input 2 signs." << endl;
                cin >> sign1 >> sign2;

                for (int i = 0; i <= 2; i++) {
                    if (sign1 == Fire[i]) {
                        if (sign2 == Fire[0] || sign2 == Fire[1] || sign2 == Fire[2]) {
                            cout << sign1 << " and " << sign2 
                                    << " are compatible Fire signs." << endl;
                        } else {
                            cout << sign1 << " and " << sign2 
                                    << " are not compatible signs." << endl;
                        }
                    }
                    else if (sign1 == Earth[i]) {
                        if (sign2 == Earth[0] || sign2 == Earth[1] || sign2 == Earth[2]) {
                            cout << sign1 << " and " << sign2 
                                    << " are compatible Earth signs." << endl;
                        } else {
                            cout << sign1 << " and " << sign2 
                                    << " are not compatible signs." << endl;
                        }
                    }
                    else if (sign1 == Air[i]) {
                        if (sign2 == Air[0] || sign2 == Air[1] || sign2 == Air[2]) {
                            cout << sign1 << " and " << sign2 
                                    << " are compatible Air signs." << endl;
                        } else {
                            cout << sign1 << " and " << sign2 
                                    << " are not compatible signs." << endl;
                        }
                    }
                    else if (sign1 == Water[i]) {
                        if (sign2 == Water[0] || sign2 == Water[1] || sign2 == Water[2]) {
                            cout << sign1 << " and " << sign2 
                                    << " are compatible Water signs." << endl;
                        } else {
                            cout << sign1 << " and " << sign2 
                                    << " are not compatible signs." << endl;
                        }
                    
                    }
                }

            break;
        } 
    } while (chose >= '1' && chose <= '8');
    
    cout << endl << "End of Menu" << endl;
    
    //Exit the Program
    return 0;
}
