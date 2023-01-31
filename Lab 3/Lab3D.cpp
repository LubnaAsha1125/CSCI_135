/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab3D

This program reads in a cvs file
asks the user to input two dates
and report the West basin elevation
for all days in reverse chronological order
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main ()
{
    string Sdate, Edate, date, elevation, ES, EE, WS, westEl;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    cout << "Enter earlier date: ";
    cin >> Sdate;
    cout << "Enter later date: ";
    cin >> Edate;

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    int index = 0;
    string Data[365][2];

    while (fin >> date >> ES >> EE >> WS >> westEl) // this loop reads the file line-by-line, extracting 5 values on each iteration 
    { 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line,  ignorring the remaining columns 

        if ((date >= Sdate) && (date <= Edate))
        {
            Data[index][0] = date;
            Data[index][1] = westEl;
            index +=1;
        }
    }

    for (int i = index; i >= 0; i--)
    {
        cout << Data[i][0] << " " << Data[i][1] << " " << "ft" << endl;
    }
    fin.close();
}