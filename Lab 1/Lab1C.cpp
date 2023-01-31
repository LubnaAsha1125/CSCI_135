/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Lab1A


This program looks at an inputted year
and determines if leap year or not
*/

#include <iostream>
using namespace std;

int main()
{
  int year;
  cout << "Enter year: ";
  cin >> year;

  if (year % 4 != 0)
    cout << "Common year" << endl;
  else if (year % 100 != 0)
    cout << "Leap year" << endl;
  else if (year % 400 != 0)
    cout << "Common year" << endl;
  else 
    cout << "Leap year" << endl;
    
  return 0;
}