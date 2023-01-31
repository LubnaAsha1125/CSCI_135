/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5 D

This program asks the user 
for a range of numbers
and counts the amount of
prime numbers in that range
*/

#include <iostream>
#include <cmath>
using namespace std;

int countPrimes(int a, int b);
bool isPrime(int n);


int countPrimes(int a, int b)
{
    int count =0;
    for (int i = a; i <= b; i++)
    {
        isPrime(i);
        if (isPrime(i)==true)
        {
            count += 1;
        }
    }
    return count;
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
    cout << "Enter ending numer: " << endl;
    cin >> num2;

    int count = countPrimes(num1, num2);
    cout << "The number of prime numbers in the range " << num1 << " to " << num2 << " is " << count << endl;
}