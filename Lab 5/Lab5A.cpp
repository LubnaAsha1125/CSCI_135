/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 A

This programs defines a functions where
if 'n' is divisible by 'd'
the functions returns true
and if not, returns false
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if (d == 0)
    {
        cout << "No" << endl;
        return false;
    }

    int remainder = n % d;
    if (remainder == 0)
    {
        cout << "Yes" << endl;
        return true;
    }
    else 
    {
        cout << "No" << endl;
        return false;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    isDivisibleBy(num1, num2);
    return 0;
}