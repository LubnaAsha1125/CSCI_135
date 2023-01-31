/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong YI
Assignment: Lab 13 A

Print all numbers in range
*/
#include <iostream>
using namespace std;

void printRange(int left, int right)
{
  if (left <= right)
    {
      cout << left << endl;
      printRange(left+1, right);
    }
}

int main()
{
  printRange(-2, 10);
}