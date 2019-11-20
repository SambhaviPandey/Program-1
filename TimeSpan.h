/*
 * TimeSpan.h
 * HW 1: CSS342
 * Last modified by Sambhavi Pandey on 4/21/2019
 *
 * This file is a interface (.h file) that contains declarations
 * of the functions and variables that exist in TimeSpan.cpp
 * file.
 */

//Header guards to prevent duplicate definitions
#ifndef TimeSpan_h
#define TimeSpan_h

#pragma once
#include <iostream>
using namespace std;

class TimeSpan
{
public:
    //Constructors
    TimeSpan();
    TimeSpan(double hours , double minutes, double seconds);
    TimeSpan(double minutes ,double seconds);
    TimeSpan(double seconds);
    
    //Destructor
    ~TimeSpan();
    
    //Getter functions
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    
    //Public function
    bool setTime(int hours, int minutes, int seconds);
    
    //Overloading Operators
    TimeSpan& operator+=(const TimeSpan &t);
    TimeSpan& operator-=(const TimeSpan &t);
    TimeSpan operator+(const TimeSpan &t) const;
    TimeSpan operator-(const TimeSpan &t) const;
    TimeSpan operator-() const;
    bool operator==(const TimeSpan &t) const;
    bool operator!=(const TimeSpan &t) const;
    friend ostream& operator << (ostream &outStream, const TimeSpan &t);
    friend istream& operator >> (istream &inStream, TimeSpan &t);
    
private:
    //This prevents modification of the variable, which is important
    //because it is used frequently in our program to convert time.
    const int TIME_CONVERSION = 60;
    
    //Private variables
    int hours;
    int minutes;
    int seconds;
    
    //Function to convert the time to seconds
    void convertToSeconds(double h, double m, double s);
};
#endif
