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
#include <string>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
    public:
        int h;
        int m;
};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};
class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
void printTimeSlot(TimeSlot ts);
void printMovie(Movie mv);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 

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
Time addMinutes(Time time0, int min)
{
    int minutes = time0.m + min;
    int new_minutes = minutes % 60;
    int new_hour = time0.h + minutes/60;
    Time newtime = {new_hour, new_minutes};
    return newtime;
}
void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}
void printTimeSlot(TimeSlot ts)
{
    Time endingTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);

    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << endingTime.h << ":" << endingTime.m << "]" << endl;
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    TimeSlot nextTimeSlot;
    nextTimeSlot.movie = nextMovie;
    nextTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    
    return nextTimeSlot;
}
bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    if (minutesSinceMidnight(ts1.startTime) > minutesSinceMidnight(ts2.startTime))
    {
        int endTime2 = minutesSinceMidnight(ts2.startTime) + ts2.movie.duration;
        if (endTime2 > minutesSinceMidnight(ts1.startTime))
            return true;
        else
            return false;
    }

    else
    {
        int endTime1 = minutesSinceMidnight(ts1.startTime) + ts1.movie.duration;
        if (endTime1 > minutesSinceMidnight(ts2.startTime))
            return true;
        else
            return false;
    }
}

int main()
{   /*
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Om Shanti Om", DRAMA, 162};
    Movie movie4 = {"Bulbbul", THRILLER, 94};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    TimeSlot afternoon = {movie3, {19, 45}};
    TimeSlot nighttime = {movie4, {10, 00}};

    TimeSlot nextTimeSlot;
    nextTimeSlot = scheduleAfter(morning, movie2);
    printTimeSlot(nextTimeSlot);

    printMovie(movie1); printTimeSlot(morning);
    printMovie(movie2); printTimeSlot(daytime);
    printMovie(movie2); printTimeSlot(evening);
    printMovie(movie3); printTimeSlot(afternoon);
    printMovie(movie4); printTimeSlot(nighttime);
    */
    Movie movie1 = {"The Wolf of Wall Street", COMEDY, 180};
    Movie movie2 = {"5 Centimeters Per Second", DRAMA, 63};
    TimeSlot daytime1 = {movie1, {10, 30}}; //630 minutes
    TimeSlot daytime2 = {movie2, {8, 30}}; //510 miinutes
    cout << timeOverlap(daytime1, daytime2);
}