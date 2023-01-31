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
#include <cctype>
using namespace std;

//ALL FUNCTIONS
string decryptCaesar(string ciphertext, int rshift);
string decryptVigenere(string ciphertext, string keyword);
char shiftChar (char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
string new_keyword(string sentence, string keyword);
string encryptVigenere(string plaintext, string keyword);

//ENCRYPT CAESAR
char shiftChar (char c, int rshift)
{
    if (('A' <= c) && (c <= 'Z'))
    {
        c = ((c + rshift - 65)+26) % 26 + 65;
        return c;
    }
    if (('a' <= c) && (c <= 'z'))
    {
        c = ((c + rshift - 97) + 26) % 26 + 97;
        return c;
    }
    else
    {
        return c;
    }
}
string encryptCaesar(string plaintext, int rshift)
{
    string caesartext;
    for (int i=0; i < plaintext.length(); i++)
    {
        caesartext += shiftChar(plaintext[i], rshift);
    }
    return caesartext;
}

//DECRYPT CAESER
string decryptCaesar(string ciphertext, int rshift)
{
    return encryptCaesar(ciphertext, 0-rshift);
}

//ENCRYPT VIGENERE
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

//DECRPYT VIGENERE
string decryptVigenere(string plaintext, string keyword)
{
    string newkeyword = new_keyword(plaintext, keyword); //xxxxx--xxxxx-
    string vigeneretext; 
    for (int i = 0, j = 0; i < plaintext.length(); i++)  //plaintext = "Ebiil, Tloia!"
    {
        char letter = plaintext[i];
        if (('A' <= letter) && (letter <= 'Z')) 
        {
            letter = (letter - (newkeyword[i] - 97) + 65) % 26 + 65; 
            vigeneretext.push_back(letter);
        }
        else if (('a' <= letter) && (letter <= 'z'))
        {
            letter = (letter - newkeyword[i] + 26) % 26 + 97;
            vigeneretext.push_back(letter);
        }
        else 
        {
            vigeneretext.push_back(letter);
        }
    }
    return vigeneretext;
}

//MAIN
int main()
{
    string plaintext, keyword;
    int shift;

    cout << "Enter plaintext: "; getline(cin, plaintext);
    cout << endl;

    cout << "= Caesar =" << endl;
    cout << "Enter shift: "; cin >> shift; 
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift) << endl;
    cout << "Decrypted: " << decryptCaesar(encryptCaesar(plaintext, shift), shift) << endl;

    cout << endl;

    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: "; cin >> keyword; 
    cout << "Ciphertext: " << encryptVigenere(plaintext, keyword) << endl;
    cout << "Decrypted: " << decryptVigenere(encryptVigenere(plaintext, keyword), keyword) << endl;

    return 0;
}