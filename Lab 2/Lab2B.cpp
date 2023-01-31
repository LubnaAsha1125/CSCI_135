/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab2B

This program asks for two integers
and prints out all integers in that range
while including the lower limit
and excluding the upper limit
*/

#include <iostream>
using namespace std;

int main()
{
    int L, U;

    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;

    for (int i=L; i < U; i++)
    {
        cout << i << " "; 
    }

}