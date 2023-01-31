/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab4C

This program asks the user for one input
and creates a nested loop
to create a cross
printing "*" for cross
and " " for blanks
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter integer: " << endl;
    cin >> size;

    for (int i=1; i <= size; i++) // i = height
    {
        for (int j=1; j <= size; j++) // j = width
        {
            if (i==j)
                cout << "*";
            else if (j == size + 1 - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}