/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 12 B

implements the function vector<int> goodVibes(const & vector<int> v); 
that, given a vector of integers, returns a vector 
with only the positive integers in the same order.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v)
{
    vector<int> pos_vec;
    for (int i=0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            pos_vec.push_back(v[i]);
        }
    }

    return pos_vec;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(-1);
    v.push_back(6);

    goodVibes(v); // returns [1,2,3,4,6]
}

