/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6 C

This program implements a function
which asks for a user input (all lowercase)
to implement the Vigenere cipher encryption 
which shifts a character by the keyword
:D
*/

#include <iostream>
#include <string>
using namespace std;

//create new keywaord that is same size as sentence
string new_keyword(string sentence, string keyword)
{
    string new_keyword;
    for (int i=0,j=0; i < sentence.length(); i++,j++)
    {
        if (i==keyword.length())
            i=0;
        if (new_keyword.length() == sentence.length())
            break;
        if (isalpha(sentence[j]))
            new_keyword.push_back(keyword[i]);
        else
        {
            i--;
            new_keyword.push_back(' ');
        }
    }
    return new_keyword;
}
string encryptVigenere(string plaintext, string keyword)
{
    string newkeyword = new_keyword(plaintext, keyword);

    string vigeneretext;
    for (int i=0; i < plaintext.length();i++)
    {
        char letter = plaintext[i];
        if (('A' <= letter) && (letter <= 'Z')) 
        {
            letter = (letter + (newkeyword[i]-97) - 65) % 26 + 65;
            vigeneretext.push_back(letter);
        }
        else if (('a' <= letter) && (letter <= 'z'))
        {
            letter = (letter + (newkeyword[i]-97) - 97) % 26 + 97;
            vigeneretext.push_back(letter);
        }
        else 
        {
            vigeneretext.push_back(letter);
        }
    }
    return vigeneretext;
}

int main()
{
    string sentence, keyword;
    cout << "Enter plaintext: ";
    getline(cin, sentence);
    cout << "Enter keyword: ";
    cin >> keyword;

    cout << "Ciphertext: " << encryptVigenere(sentence, keyword) << endl;
}