/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 G

This program inputs
height and width
and creates a checkerboard
with 3 by 3 squares
and works if input dimensions
are not a property of 3
*/

#include <iostream>
using namespace std;

int main()
{
    int width=0, height=0; 
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;
    
    int count_star = 0;
    int count_space = 0;

    for (int row=0; row < height; row++) 
    {
        for (int col=0; col < width; col++) 
        {
            if ((col % 6 < 3 && row % 6 < 3) || (col % 6 >= 3 && row % 6 >= 3))
            {
                if (count_star < 3)
                {
                    cout << "*";
                }
                count_star++;

                if (count_star == 3)
                {
                    count_star = 0;
                }
            }

            else 
            {
                if (count_space < 3)
                {
                    cout << " ";
                }
                count_space++;

                if (count_space == 3)
                {
                    count_space = 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}