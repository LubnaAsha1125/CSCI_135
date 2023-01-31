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

//int minutesSinceMidnight(Time time);
//int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);

/*
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
*/

Time addMinutes(Time time0, int min)
{
    int minutes = time0.m + min;
    int new_minutes = minutes % 60;
    int new_hour = time0.h + minutes/60;
    Time newtime = {new_hour, new_minutes};
    return newtime;
}
 
int main()
{
    /*
    Time firsttime, secondtime;
    cout << "Enter first time: " << endl;
    cin >> firsttime.h >> firsttime.m;
    cout << "Enter second time: " << endl;
    cin >> secondtime.h >> secondtime.m;

    cout << "These moments of time are " << minutesSinceMidnight(firsttime) << " and " << minutesSinceMidnight(secondtime) << " minutes after midnight. The interval between them is " << minutesUntil(firsttime, secondtime) << " minutes." << endl;
    */

   Time currenttime;
   int minutes;
   cout << "Enter time: " << endl;
   cin >> currenttime.h >> currenttime.m;
   cout << "Enter amount of minutes: " << endl;
   cin >> minutes;
   
   addMinutes(currenttime, minutes);
}