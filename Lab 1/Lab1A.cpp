/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Lab1A


This program finds the smaller of two integers
*/

/*
Extra Comment
*/

#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;
  if (a < b)
  cout << "The smaller of the two is " << a << endl;
  if (a > b)
  cout << "The smaller of the two is " << b << endl;
  
  return 0;
}