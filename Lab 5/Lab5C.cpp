/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 C

This program asks the user 
for a number
and determines the next
prime number after that number
*/

#include <iostream>
#include <cmath>
using namespace std;

int nextPrime(int n);
bool isPrime(int n);

int nextPrime(int n)
{
    int nextprime;
    for (int i=n+1; i>n; i++)
    {
        isPrime(i);
        if (isPrime(i)==true)
        {
            cout << i << " is the next biggest prime number." << endl;
            nextprime = i;
            break;
        }
    }
    return nextprime;
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
    cout << "Enter a number: ";
    cin >> num;

    nextPrime(num);
}