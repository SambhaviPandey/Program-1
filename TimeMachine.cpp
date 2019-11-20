/*
 * TimeMachine.cpp
 * HW 1: CSS 342
 * Last modified by Sambhavi Pandey on 4/21/2019
 *
 * This file contains a driver that tests the functions
 * in the TimeSpan.cpp file in order to ensure they are
 * working properly.
 */

#include "TimeSpan.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Testing Constructor Cases: " << endl;
    
    TimeSpan case1 (1, 2, 3);
    cout << "case1: " << case1 << endl;
    
    TimeSpan case2 (45.6, 4, 2);
    cout << "case2: " << case2 << endl;
    
    TimeSpan case3 (20.1, 4.3, 3);
    cout << "case3: " << case3 << endl;
    
    TimeSpan case4 (67.3, 34.1, 3.2);
    cout << "case4: " << case4 << endl;
    
    TimeSpan case5 (23, 4);
    cout << "case5: " << case5 << endl;
    
    TimeSpan case6 (89.4, 9);
    cout << "case6: " << case6 << endl;
    
    TimeSpan case7 (45.4, 9.3);
    cout << "case7: " << case7 << endl;
    
    TimeSpan case8 (9);
    cout << "case8: " << case8 << endl;
    
    TimeSpan case9 (5.98);
    cout << "case9: " << case9 << endl;
    
    TimeSpan case10 (0, 5, 2);
    cout << "case10: " << case10 << endl;
    
    TimeSpan case11 (4, -61, 3);
    cout << "case11: " << case11 << endl;
    
    TimeSpan case12 (1.5, 4, -10);
    cout << "case12: " << case12 << endl;
    
    TimeSpan case13 (0, 0, 0);
    cout << "case13: " << case13 << endl;
    
    TimeSpan case14 (-2, -1, -2);
    cout << "case14: " << case14 << endl;
    
    cout << "Testing += Cases: " << endl;
    TimeSpan case31;
    case31 += case1;
    cout << "Testing case31 += case1" << endl;
    cout << "case1: " << case1 << endl;
    cout << "case31: " << case31 << endl;
    
    TimeSpan case32;
    case32 += case8;
    cout << "Testing case32 += case8" << endl;
    cout << "case8: " << case8 << endl;
    cout << "case32: " << case32 << endl;
    
    TimeSpan case33;
    case33 += case10;
    cout << "Testing case33 += case10" << endl;
    cout << "case10: " << case10 << endl;
    cout << "case33: " << case33 << endl;
    
    cout << "Testing Addition cases: " << endl;
    
    cout << "Testing case15 = case1 + case13" << endl;
    TimeSpan case15 = case1 + case13;
    cout << case15 << endl;
    
    cout << "Testing case16 = case6 + case7" << endl;
    TimeSpan case16 = case6 + case7;
    cout << case16 << endl;
    
    cout << "Testing case17 = case3 + case4" << endl;
    TimeSpan case17 = case3 + case4;
    cout << case17 << endl;
    
    cout << "Testing -= Cases: " << endl;
    
    cout << "Testing case34 -= case13;" << endl;
    TimeSpan case34;
    case34 -= case13;
    cout << "case13: " << case13 << endl;
    cout << "case34: " << case34 << endl;
    
    cout << "Testing case35 -= case3;" << endl;
    TimeSpan case35;
    case35 -= case3;
    cout << "case3: " << case3 << endl;
    cout << "case35: " << case35 << endl;
    
    cout << "Testing case36 -= case10" << endl;
    TimeSpan case36;
    case36 -= case10;
    cout << "case10: " << case10 << endl;
    cout << "case36: " << case36 << endl;
    
    cout << "Testing Subtraction Cases: " << endl;
    
    cout << "Testing case18 = case6 - case7" << endl;
    TimeSpan case18 = case6 - case7;
    cout << case18 << endl;
    
    cout << "Testing case19 = case8 - case9" << endl;
    TimeSpan case19 = case8 - case9;
    cout << case19 << endl;
    
    cout << "Testing case20 = case4 - case3" << endl;
    TimeSpan case20 = case4 - case3;
    cout << case20 << endl;
    
    cout << "Testing Unary Negation cases: " << endl;
    
    cout << "Testing case21 = -case8" << endl;
    TimeSpan case21 = -case8;
    cout << case21 << endl;
    
    cout << "Testing case22 = -case5" << endl;
    TimeSpan case22 = -case5;
    cout << case22 << endl;
    
    cout << "Testing case23 = -case1" << endl;
    TimeSpan case23 = -case1;
    cout << case23 << endl;
    
    cout << "Testing == Comparison Cases: " << endl;
    
    cout << "Testing case10 == case11: ";
    if (case10 == case11)
    {
        cout << "Duration cases are same" << endl;
    }
    else
    {
        cout << "Duration cases are different" << endl;
    }
    
    //Creating a new case which is the same as case13 to see if
    //duration cases are same works
    TimeSpan case24 (0, 0, 0);
    
    cout << "Testing case13 == case24: ";
    if (case13 == case24)
    {
        cout << "Duration cases are same" << endl;
    }
    else
    {
        cout << "Duration cases are different" << endl;
    }
    
    cout << "Testing case1 == case10: ";
    if (case1 == case10)
    {
        cout << "Duration cases are same" << endl;
    }
    else
    {
        cout << "Duration cases are different" << endl;
    }
    
    cout << endl;//Blank line between outputs
    
    cout << "Testing != Comparison Cases: " << endl;
    
    cout << "Testing case3 != case4: ";
    if (case3 != case4)
    {
        cout << "Duration cases are different" << endl;
    }
    else
    {
        cout << "Duration cases are same" << endl;
    }
    
    cout << "Testing case13 != case24: ";
    if (case13 != case24)
    {
        cout << "Duration cases are different" << endl;
    }
    else
    {
        cout << "Duration cases are same" << endl;
    }
    
    cout << "Testing case10 != case9: ";
    if (case1 != case9)
    {
        cout << "Duration cases are different" << endl;
    }
    else
    {
        cout << "Duration cases are same" << endl;
    }
    
    cout << endl;//Blank line between output
    
    cout << "Testing Input Cases: " << endl;
    
    TimeSpan case25;
    cout << "Enter three int numbers for the hours, minutes, and seconds: "
         << endl;
    cin >> case25;
    cout << case25 << endl;
    
    TimeSpan case26;
    cout << "Enter three int numbers for the hours, minutes, and seconds: "
         << endl;
    cin >> case26;
    cout << case26 << endl;
    
    TimeSpan case27;
    cout << "Enter three int numbers for the hours, minutes, and seconds: "
         << endl;
    cin >> case27;
    cout << case27 << endl;
    
    cout << "Testing getHours, getMinutes, and getSeconds functions: "
         << endl;
    
    TimeSpan case28 (3, 4, 5);
    cout << "Entered 3 hour, 4 minutes, 5 seconds. After calling functions: "
         << endl;
    cout << "Hours: " << case28.getHours() << endl;
    cout << "Minutes: " << case28.getMinutes() << endl;
    cout << "Seconds: " << case28.getSeconds() << endl;
    
    cout << endl; //Blank line between outputs
    
    TimeSpan case29 (-10, -11, -12);
    cout << "Entered -10 hours, -11 minutes, -12 seconds. "
         << "After calling functions: " << endl;
    cout << "Hours: " << case29.getHours() << endl;
    cout << "Minutes: " << case29.getMinutes() << endl;
    cout << "Seconds: " << case29.getSeconds() << endl;
    
    cout << endl; //Blank line between outputs
    
    TimeSpan case30 (1, 2, 3);
    cout << "Entered 1 hour, 2 minutes, 3 seconds. "
         << "After calling functions: " << endl;
    cout << "Hours: " << case30.getHours() << endl;
    cout << "Minutes: " << case30.getMinutes() << endl;
    cout << "Seconds: " << case30.getSeconds() << endl;
    
    cout << endl;//Blank line between outputs
    
    cout << "Testing setTime function: " << endl;
    
    cout << "Entered 1 hour, 2 minutes, 3 seconds. "
         << "After calling function " <<
    "boolean value result is: " << endl;
    cout << case1.setTime(1, 2, 3);
    cout << endl;//Blank line between outputs
    
    cout << "Entered 1 hour, 2 minutes, 3 seconds. "
         << "After calling function " <<
    "boolean value result is: " << endl;
    cout << case1.setTime(1, 2, 3);
    cout << endl;//Blank line between outputs
    
    cout << "Entered -4 hours, 5 minutes, 2 seconds. "
         << "After calling function " <<
    "boolean value result is: " << endl;
    cout << case10.setTime(-4, 5, 2);
    cout << endl;//Blank line between outputs
    
    cout << "Entered 20.1 hours, 4.3 minutes, 3 seconds. "
         << "After calling function " <<
    "boolean value result is: " << endl;
    cout << case3.setTime(20.1, 4.3, 3);
    cout << endl;//Blank line between outputs
};
