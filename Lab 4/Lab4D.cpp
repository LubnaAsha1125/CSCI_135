/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab4C

This program asks the user for one input
and creates the 
bottom-left half of a square
given the input 
:) 
*/

#include <iostream>
using namespace std;

int main()
{
    int length;

    cout << "Input side length: " << endl;
    cin >> length;

    cout << "Shape: " << endl;

    for (int i=1; i <= length; i++)
    {
        for (int j=1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}