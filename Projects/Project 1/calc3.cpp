/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 1D

This program creates 
a calculator 
that understands squared numbers
and prints out its sum
*/

#include <iostream>
using namespace std;

int main()
{
    int sum=0; //create integer sum and set to 0
    int num=0; //create integer num and set to 0
    char sign; //create a char variable called sign
    char var;
  
    while (cin >> num)
    {   
        sum += num;
        while (cin >> sign)
        {
            if (sign == '^')
            {
              sum = sum*sum;
            }
            if (sign == '+')
            {   
                cin >> num;
                var = cin.peek();
                if (var == '^')
                {
                  cin >> sign;
                  sum = sum + (num*num);
                }
                else
                  sum += num;
            }
            if (sign == '-')
            {
                cin >> num;
                var = cin.peek();
                if (var == '^')
                {
                  cin >> sign;
                  sum = sum - (num*num);
                }
                else 
                  sum -= num;
            }
            if (sign == ';')
            {
                cout << sum << endl;
                sum = 0;
                break;
            }
        }
    }
}
