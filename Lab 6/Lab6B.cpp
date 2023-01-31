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
#include <string>
using namespace std;

char shiftChar (char c, int rshift);
string encryptCaesar(string plaintext, int rshift);

char shiftChar (char c, int rshift)
{
    if (('A' <= c) && (c <= 'Z'))
    {
        c = (c + rshift - 65) % 26 + 65;
    }
    if (('a' <= c) && (c <= 'z'))
    {
        c = (c + rshift - 97) % 26 + 97;
    }
    return c;
}

string encryptCaesar(string plaintext, int rshift)
{
    string caesartext;
    for (int i=0; i < plaintext.length(); i++)
    {
        char letter = plaintext[i];
        if ((('A' <= letter) && (letter <= 'Z')) || (('a' <= letter) && (letter <= 'z')))
        {
            letter = shiftChar(letter, rshift);
            caesartext.push_back(letter);
        }
        else 
        {
            caesartext.push_back(letter);
        }
    }
    return caesartext;
}

int main()
{
    string sentence;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, sentence);
    cout << "Enter shift: ";
    cin >> shift;

    cout << encryptCaesar(sentence, shift) << endl;
}