/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 F

This program prints
an upside-down trapezoid
given width and height
and if height is impossible (too large)
program will print "Impossible Shape"
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height, row, spaces, stars;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height; 

    if (width % 2 == 0) //even size , min asterik = 2
    {
        if (height > width/2)
        {
            cout << "Impossible Shape!" << endl;
        }
            
        else 
        {
            for (row = height; row >= 1; row--)
            {
                for (spaces = height-1; spaces >= row; spaces--)
                {
                    cout << " ";
                }
                for (stars = 1; stars <= width; stars++)
                {
                cout << "*";
                }
                width -= 2;
                cout << endl;
            }  
        }

    }

    if (width % 2 != 0) //odd side , min asterik = 1 
    {
        if (height > (width + 1)/2)
        {
            cout << "Impossible Shape!" << endl; 
 
        }
        else
        {
            for (row = height; row >= 1; row--)
            {
                for (spaces = height-1; spaces >= row; spaces--)
                {
                    cout << " ";
                }
                for (stars = 1; stars <= width; stars++)
                {
                    cout << "*";
                }
                width -= 2;
                cout << endl;
            }
        }
    }
}