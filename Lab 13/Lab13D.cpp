/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong YI
Assignment: Lab 13 C

Is string alphanumeric?
*/
#include <iostream>
using namespace std;
bool isAlphanumeric(string s);

bool isAlphanumeric(string s)
{
  if (s == "")
    return true;

  if(!isalnum(s[0]))
    return false;

  string new_string = s.substr(1,-1);
  isAlphanumeric(new_string);

  if (isAlphanumeric(new_string) == false)
    return false;

  return true;
}

int main() 
{
  cout << isAlphanumeric("ABCD") << endl;        // true (1)
  cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
  cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

}