/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Lab 1 D

This program looks at an inputted year and month
and determines how many days
are in that month 
during that year
*/


#include <iostream>
using namespace std;

int main()
{
  int year,month;
  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month: ";
  cin >> month;

  if (month == 1)
    cout << "31 days" << endl;
  if (month == 2)
    if (year % 4 != 0)
      cout << "28 days" << endl;
    else if (year % 100 != 0)
      cout << "29 days" << endl;
    else if (year % 400 != 0)
      cout << "28 days" << endl;
    else 
      cout << "29 days" << endl;
  if (month == 3)
    cout << "31 days" << endl;
  if (month == 4)
    cout << "30 days" << endl;
  if (month == 5)
    cout << "31 days" << endl;
  if (month == 6)
    cout << "30 days" << endl;
  if (month == 7)
    cout << "31 days" << endl;
  if (month == 8)
    cout << "31 days" << endl;
  if (month == 9)
    cout << "30 days" << endl;
  if (month == 10)
    cout << "31 days" << endl;
  if (month == 11)
    cout << "30 days" << endl;
  if (month == 12)
    cout << "31 days" << endl;


  return 0;
}