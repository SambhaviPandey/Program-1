/*
 * TimeSpan.cpp
 * HW 1: CSS342
 * Last modified by Sambhavi Pandey on 4/21/2019
 * 
 * This file includes various constructors (such as default
 * constructor and constructors that take in three doubles,
 * two doubles, and one double value) and a destructor. This file
 * also includes operator overloading. The purpose of this code
 * is to determine a duration of time in hours, minutes, and seconds.
 * This is done by determining the number of hours, minutes, and seconds
 * passed in and taking care of time in decimals accordingly. This file
 * also contains getter functions and the setTime function.
 */

#include "TimeSpan.h"
#include <cmath>
#include <iostream>

using namespace std;

//Default constructor, sets hours, minutes, and seconds to zero
TimeSpan :: TimeSpan()
{
    setTime(0, 0, 0);
}

//Constructor takes in three values of type double (corresponding to
//hours, minutes, and seconds). Rounds seconds and calls convertToSeconds
//function to appropriately handle possible decimals.
TimeSpan :: TimeSpan (double hours, double minutes, double seconds)
{
    seconds = round(seconds);
    convertToSeconds(hours, minutes, seconds);
}

//Constructor takes in two values of type double (corresponding to minutes
//and seconds). Rounds seconds and calls convertToSeconds
//function to appropriately handle possible decimals.
TimeSpan :: TimeSpan (double minutes, double seconds)
{
    seconds = round(seconds);
    convertToSeconds(0, minutes ,seconds);
}

//Constructor takes in one value of type double (corresponding to seconds).
//Rounds seconds and calls setTime function.
TimeSpan :: TimeSpan(double seconds)
{
    seconds = round(seconds);
    setTime(0, 0, seconds);
}

//Destructor
TimeSpan ::~TimeSpan()
{
}

//The function getHours returns the number of hours.
int TimeSpan :: getHours() const
{
    return hours;
}

//The function getMinutes returns the number of minutes.
int TimeSpan :: getMinutes() const
{
    return minutes;
}

//The function getSeconds returns the number of seconds.
int TimeSpan :: getSeconds() const
{
    return seconds;
}

//setTime function takes in three int values (corresponding to hours,
//minutes, and seconds) and checks if the number of minutes and
//and seconds are between -60 and 60. If they are not then appropriate
//conversions are made. This functions also sets the number of hours,
//minutes,and seconds and returns true if successful.
bool TimeSpan :: setTime(int h, int m, int s)
{
    if ((m >= TIME_CONVERSION) || (m <= (-TIME_CONVERSION)))
    {
        h = (m / TIME_CONVERSION) + h;
        m = m % TIME_CONVERSION;
    }
    if ((s >= TIME_CONVERSION) || (s <= (-TIME_CONVERSION)))
    {
        m = (s/ TIME_CONVERSION) + m;
        s = s % TIME_CONVERSION;
    }
    hours = h;
    minutes = m;
    seconds = s;
    return true;
}

//Implements the += assignment statement and determines
//the hours, minutes, and seconds and calls setTime function.
TimeSpan& TimeSpan :: operator += (const TimeSpan &t)
{
    TimeSpan time;
    hours += t.hours;
    minutes += t.minutes;
    seconds += t.seconds;
    time.setTime(hours, minutes, seconds);
    return *this;
}

//Implements the addition operator and determines
//the hours, minutes, and seconds and calls setTime function.
TimeSpan TimeSpan :: operator + (const TimeSpan &t) const
{
    TimeSpan time;
    time.hours = hours + t.hours;
    time.minutes = minutes + t.minutes;
    time.seconds = seconds + t.seconds;
    time.setTime (time.hours, time.minutes, time.seconds);
    return time;
}

//Implements the -= assignment statement and determines
//the hours, minutes, and seconds and calls setTime function.
TimeSpan& TimeSpan :: operator -= (const TimeSpan &t)
{
    hours -= t.hours;
    minutes -= t.minutes;
    seconds -= t.seconds;
    setTime (hours, minutes, seconds);
    return *this;
}

//Implements the subtraction operator and determines
//the hours, minutes, and seconds and calls setTime function.
TimeSpan TimeSpan :: operator -(const TimeSpan &t) const
{
    TimeSpan time;
    time.hours = hours - t.hours;
    time.minutes = minutes - t.minutes;
    time.seconds = seconds - t.seconds;
    time.setTime(time.hours, time.minutes, time.seconds);
    return time;
}

//Implements unary negation and determines
//the hours, minutes, and seconds and calls setTime function.
TimeSpan TimeSpan :: operator-() const
{
    TimeSpan time;
    time.hours = -hours;
    time.minutes = -minutes;
    time.seconds = -seconds;
    return time;
}

//Implements the == comparison and compares the
//hours, minutes, and seconds and returns a bool value.
bool TimeSpan :: operator == (const TimeSpan &t) const
{
    return ((hours == t.hours) && (minutes == t.minutes)
            && (seconds == t.seconds));
}

//Implements the != comparison and compares the
//hours, minutes, and seconds and returns a bool value.
bool TimeSpan :: operator != (const TimeSpan &t) const
{
    return ((hours != t.hours) && (minutes != t.minutes)
            && (seconds != t.seconds));
}

//Implements the >> (right shift operator) and prints
//the hours, minutes, and seconds as output. Calls the
//getHours, getMinutes, and getSeconds functions in order to do this.
ostream &operator << (ostream &outStream, const TimeSpan &t)
{
    outStream << "Hours: " << t.getHours() << ", Minutes: " << t.getMinutes()
    << ", Seconds: " << t.getSeconds() << endl;
    return outStream;
}

//Takes as input three values (hours, minutes, and seconds).
//Calls setTime function to set the hours, minutes, and seconds
//entered. Returns inStream.
istream &operator >> (istream &inStream, TimeSpan &t)
{
    int hours, minutes, seconds;
    inStream >> hours >> minutes >> seconds;
    t.setTime(hours, minutes, seconds);
    return inStream;
}

//Function that takes in three doubles (corresponding to hours, minutes, and
//seconds). First, this function converts the time to seconds, adds the total
//seconds, and then converts the time back to hours, minutes, and seconds.
//It appropriately handles decimals and also calls the setTime function.
void TimeSpan :: convertToSeconds(double h, double m, double s)
{
    //Converts hours to seconds by multiplying hours by 3600
    double hours = h * (TIME_CONVERSION * TIME_CONVERSION);
    //Converts minutes to seconds by multiplying minutes by 60
    double minutes = m * TIME_CONVERSION;
    //Rounds seconds in case of a decimal
    double seconds = round(s);
    //Adds the seconds together
    double totalSeconds = hours + minutes + seconds;
    //Converts seconds back to hours by dividing total seconds by 3600
    double hrs = totalSeconds/(TIME_CONVERSION * TIME_CONVERSION);
    //Converts minutes back to hours by first subtracting hrs - trunc(hrs)
    //(in order to handle any decimals that exist) and then
    //multiplying by 60
    double mins = (hrs - trunc(hrs)) * TIME_CONVERSION;
    //To find seconds it subtracts mins - trunc(mins) to handle
    //any decimals that exist and multiplies by 60 to convert
    //to seconds. Then rounds the answer.
    double secs = round((mins - trunc(mins)) * TIME_CONVERSION);
    //Calling setTime function
    setTime(hrs, mins, secs);
}
