/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7 B

This program takes input 
of a badly indented 
program and
indents each line
properly 
:D
*/
#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
using namespace std;

string removeLeadingSpaces(string line);
int countChar(string line, char c);
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

int countChar(string line, char c)
{
    int count=0;
    for (int i=0; i < line.length(); i++)
    {
        if (line[i] == c)
            count += 1;
    }
    return count;
}

int main()
{
    string line;
    int count = 0;
    while (getline(cin, line, '\n'))
    {
        string newline = removeLeadingSpaces(line);
        string indents = "";
        for (int i=0; i < (newline[0] != '}' ? count : count - 1 ); i++)
        { 
            indents += "\t";
        }
        cout << indents << newline << endl;
        count += countChar(line, '{') - countChar(line, '}');
    }
    return 0;
}