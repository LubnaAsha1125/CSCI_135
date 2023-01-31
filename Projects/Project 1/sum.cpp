/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Project 1 A

This program 
reads a sequence of integers
from cin
and reports their sum
*/


#include <iostream>
using namespace std;

int main()
{
  int num;
  int sum=0;
  while(cin >> num)
  {
    sum= sum + num;
  }
  cout << sum << endl;
}