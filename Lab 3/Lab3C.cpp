/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab3C

This program reads in a cvs file
asks the user to intput two dates and
checks each date within the interval
and compares which basin had higher elevation that date
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    ifstream fin ("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk; // new string variable
    getline (fin, junk); 
    // read one line from the file and 
    //assign it to variable 'junk'

    string Date;
    double ES, EastEl, WS, WestEl;
    string SDate;
    string EDate;

    cout << "Enter starting date: " << endl;
    cin >> SDate;
    cout << "Enter ending date: " << endl;
    cin >> EDate;

    while (fin >> Date >> ES >> EastEl >> WS >> WestEl)
    {
        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns

        if ((Date >= SDate) && (Date <= EDate))
        {
            if (EastEl > WestEl)
            {
                cout << Date << " East" << endl;
            }
            if (EastEl < WestEl)
            {
                cout << Date << " West" << endl;
            }
        }
    }
    fin.close();
    return 0;
}