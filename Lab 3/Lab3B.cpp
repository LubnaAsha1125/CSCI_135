/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab3B

This program reads in a cvs file
that finds the minimum and maximum storage
in East basin in 2018
and prints them out
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

    double EastStorage; 
    string date;
    double min;
    double max;

     while (fin >> date >> EastStorage)
    {
        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns
        min = EastStorage;
        max = EastStorage;
        break;
    }

    while (fin >> date >> EastStorage)
    {
        fin.ignore(INT_MAX, '\n'); 
        //skips to the end of line, 
        //ignoring the remaining columns
        
        if (EastStorage > max)
        {
            max = EastStorage;
        }   
        if (EastStorage < min)
        {
            min = EastStorage;
        }
    }
    fin.close();
    cout << "Minimum storage in East Basin: " << min << " billion gallons" << endl;
    cout << "Maximum storage in East Basin: " << max << " billion gallons" << endl;
    return 0;
}