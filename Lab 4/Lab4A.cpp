/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab4A

This program asks the user for two inputs
and creates a loop for width
within a loop for height
and prints out the height and width using '*'
*/
#include <iostream>
using namespace std;

int main()
{
    int width, height;
    
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;
    cout << "Shape: " << endl;

    for (int i=0; i < height; i++)
    {
        for (int j=0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
  return 0;
}