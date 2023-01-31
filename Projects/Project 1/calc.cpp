/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Project 1 A

This program 
reads in a formula
from cin
and reports its sum
*/

#include <iostream>
using namespace std; 

int main()
{
    int sum = 0;
    int num = 0;
    char sign;

    cin >> num;
    sum = sum + num;
    
    while (cin>>sign)
    {
        cin >> num;
        if (sign == '+')
        {
            sum = sum + num;
        }
        else if (sign == '-')
        {
            sum = sum - num;
        }
    }
    cout << sum << endl;
    return 0;

}