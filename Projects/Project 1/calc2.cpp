/*
Lubna Asha
Course: CSCI-136
Instructor: Professor Tong Yi
Assignment: Project 1 A

This program 
reads in multiple formula
from cin
and reports its sum
*/

#include <iostream>
using namespace std; 

int main()
{
    int sum=0; //create integer sum and set to 0
    int num=0; //create integer num and set to 0
    char sign; //create a char variable called sign
 
    while (cin >> num)
    {
        sum += num;
        while (cin >> sign) //while inputting a sign
        {    
            if (sign == ';')
            {
                std::cout << sum << endl; 
                sum = 0;
                cin >> num;
                sum += num;
                continue;
            }
            cin >> num;
            if (sign == '+')
            { 
                sum = sum + num; 
            }
            if (sign == '-')
            {
                sum = sum - num;
            }
        }
    } 
    return 0;
}