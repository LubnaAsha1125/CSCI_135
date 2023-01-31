/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6 A

This program takes in
a user-inputted sentence
and loops through each character
to print out that character
and its integer value
according to the ASCII table
*/
#include <iostream>
using namespace std;

int main()
{
    string sentence;
    cout << "Input: ";
    getline(cin, sentence);

    for (int i=0; i < sentence.length(); i++)
    {
        cout << sentence[i] << " " << (int)sentence[i] << endl;
    }

    return 0;
}