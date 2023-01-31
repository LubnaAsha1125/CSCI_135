/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 E

This program asks the user 
for a number and checks
whether that number is 
a twin prime number
(extra comment)
(similar to Lab 5C)
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isTwinPrime(int n);
bool isPrime(int n);
int nextTwinPrime(int n);

int nextTwinPrime(int n)
{
    int nexttwinprime;
    for (int i=n+1; i>n; i++)
    {
        isTwinPrime(i);
        if (isTwinPrime(i)==true)
        {
            cout << i << " is the next biggest prime number." << endl;
            nexttwinprime = i;
            break;
        }
    }
    return nexttwinprime;
}

bool isTwinPrime(int n)
{
    if (isPrime(n)==false)
    {
        cout << n << " is not a twin prime number." << endl;
        return false;
    }

    isPrime(n+2);
    isPrime(n-2);
    
    if ((isPrime(n+2)==true) || (isPrime(n-2)==true))
    {
        cout << n << " is a twin prime number." << endl;
        return true;
    }
    else
    {
        cout << n << " is not a twin prime number." << endl;
        return false;
    }
}

bool isPrime(int n)
{
    if (n <= 1) {
        return false;
    }
    for (int i=2; i <= sqrt(n); i++) {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    nextTwinPrime(num);
}