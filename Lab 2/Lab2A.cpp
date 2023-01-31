/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab2A

This program inputs an integer
within the range of 0 to 100
If out of range, program will continuously 
ask for another input
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;

    cout << "Please enter an integer (or don't idrc): " << endl;
    cin >> i;

  while ((i<=0) || (i>=100))
    {
        cout << "Please re-enter u idiot: " << endl;
        cin >> i;
    }
  
    cout << "Number squared is " << pow(i,2) << endl;
}