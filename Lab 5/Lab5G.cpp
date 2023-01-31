/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 G

This program asks the user 
for two numbers and 
looks for the largest
twin prime number
within that range
:D
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isTwinPrime(int n);
bool isPrime(int n);
int largestTwinPrime(int a, int b);

int largestTwinPrime(int a, int b)
{
    for (int i=b; i >= a; i--)
    {
        if (isTwinPrime(i)==true)
        {
            cout << "The largest twin prime number in this range is " << i << endl;
            return i;
        }
    }
    return -1;
}

bool isTwinPrime(int n)
{
    if (isPrime(n)==false)
    {
        return false;
    }

    isPrime(n+2);
    isPrime(n-2);
    
    if ((isPrime(n+2)==true) || (isPrime(n-2)==true))
    {
        return true;
    }
    else
    {
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
    int num1, num2;
    cout << "Enter starting number: " << endl;
    cin >> num1;
    cout << "Enter ending number: " << endl;
    cin >> num2;

    largestTwinPrime(num1, num2);
}