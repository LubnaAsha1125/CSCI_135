/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab4B

This program asks the user for two inputs
and creates a loop for width
within a loop for height
and prints out the height and width using '*'
adding a space inbetween each '*'
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
            if (i % 2 == 0)
            {
                if(j % 2 != 0)
                {
                    cout << " ";
                }
                if(j % 2 == 0)
                {
                    cout << "*";
                }
            }
            if (i % 2 != 0)
            {
                if(j % 2 != 0)
                {
                    cout << "*";
                }
                if(j % 2 == 0)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
  return 0;
}