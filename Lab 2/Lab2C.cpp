/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

This program creates 
an array of 10 integers
and allows the user 
to edit any of its elements
*/

#include <iostream>
using namespace std;

int main()
{
    int myData[10];
  
    for (int i=0; i<10; i++)
    {
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    cout << endl;

    int index, value;
    cout << "Input index: " << endl;
    cin >> index;
    cout << "Input value: " << endl;
    cin >> value;
  
    while ((index >= 0) && (index < 10))
    {
        myData[index] = value;

        for (int i=0; i<10; i++)
            cout << myData[i] << " ";
        cout << endl;

      cout << "Input index: " << endl;
      cin >> index;
      cout << "Input value: " << endl;
      cin >> value;
    }

    if ((index < 0) || (index >= 10))
    {
        cout << "Index out of range. Exit.";
        return 0;
    }
}