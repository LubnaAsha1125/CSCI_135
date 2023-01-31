/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 12 C

Make a program that implements the function void gogeta(vector<int> &goku, vector<int> &vegeta) that appends elements of the second vector into the first and empties the second vector.
*/
#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta)
{
  for (int i=0; i < vegeta.size(); i++)
    goku.push_back(vegeta[i]);

  vegeta.clear();
  
}



