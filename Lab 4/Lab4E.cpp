/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 E

This program prints
the top-right half 
of a square
given the side 'length'
*/

#include <iostream>
using namespace std;

int main()
{
    int length;

    cout << "Input side length: " << endl;
    cin >> length;

    cout << "Shape:" << endl;

    for (int row = length ; row >=1 ; row--)
    {
        for (int col1 = length-row ; col1 > 0; col1--)
        {
            cout << " ";
        }
            
        for (int col2 = row; col2 > 0; col2--)
        {
            cout << "*";
        }
    cout << endl;   
    }    
}