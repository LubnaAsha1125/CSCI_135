/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 12 A

Creates a vector
that stores n-1 elements
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
    vector<int> vec;
    for (int i=0; i<n; i++)
        vec.push_back(i);
    
    return vec;
}

  

