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
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) {
        return false;
    }
    for (int i=2; i <= sqrt(n); i++) {
        if (n%i==0)
        {
            cout << n << " is not a prime number." << endl;
            return false;
        }
    }

    cout << n << " is a prime number." << endl;
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    isPrime(num);
}