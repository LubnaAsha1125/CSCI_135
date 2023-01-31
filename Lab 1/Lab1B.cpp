/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Lab1A


This program finds
the smallest of three integers
*/

#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;
  cout << "Enter the third number: ";
  cin >> c;

  if ((a < b) && (a < c))
    cout << "The smaller of the three is " << a << endl;
  if ((b < a) && (b < c))
    cout << "The smaller of the three is " << b << endl;
  if ((c < a) && (c < b))
    cout << "The smaller of the three is " << c << endl;
  return 0;
}