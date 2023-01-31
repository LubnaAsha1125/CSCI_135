/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 10 A

This code implements two functions:
- first function reports number of minutes
away from midnight
- second function recieves two time arguements
and reports how many minutes they are away from 
each other
*/

#include <iostream>
using namespace std;

class Time { 
    public:
        int h;
        int m;
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);


int minutesSinceMidnight(Time time) //calculates the amount of minutes the inputted time is after midnight (00:00)
{
    int minutes = (time.h * 60) + time.m;
    return minutes;
}

int minutesUntil(Time earlier, Time later) //calculates the difference between the two times in minutes
{
    int minutes = (later.h - earlier.h) * 60;
    minutes = minutes +  (later.m - earlier.m);
    return minutes;
}
 
int main()
{
    Time firsttime, secondtime;
    cout << "Enter first time: " << endl;
    cin >> firsttime.h >> firsttime.m;
    cout << "Enter second time: " << endl;
    cin >> secondtime.h >> secondtime.m;

    cout << "These moments of time are " << minutesSinceMidnight(firsttime) << " and " << minutesSinceMidnight(secondtime) << " minutes after midnight. The interval between them is " << minutesUntil(firsttime, secondtime) << " minutes." << endl;
}