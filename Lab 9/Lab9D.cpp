/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9D

while given a certain code, 
fix the code so that code still creates poems
but gets deleted after
so it doesn't crash computer
*/
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p;
    }
}
