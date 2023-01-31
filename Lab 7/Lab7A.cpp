/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6 B

This program implements two functions that
asks the user for a sentence 
and shifts each character by 5 
and then encrypts the character
:D
*/
#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
using namespace std;
string removeLeadingSpaces(string line);
int main();

string removeLeadingSpaces(string line)
{
    string newline;
    int length = line.length();
    int space;
    for (int i=0; i < length; i++)
    {   
        if (isspace(line[i])==false)
        {
            space = i;
            break;
        }
    }

    for (int j=space; j < length; j++)
    {
        char c = line[j];
        newline += c;
    }

    return newline;
}

int main()
{   
    string line;
    while (getline(cin, line))
    {
        cout << removeLeadingSpaces(line) << endl;
    }
    return 0;
}


