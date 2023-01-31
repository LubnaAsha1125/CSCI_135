/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 12 D

implement the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) 
that returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments. 
If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0.
Make a program that implements the function void gogeta(vector<int> &goku, vector<int> &vegeta) 
that appends elements of the second vector into the first and empties the second vector.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2)
{
  vector<int> sum;
  vector<int> bigger_vec;
  if (v1.size() > v2.size())
    bigger_vec = v1;
  else
    bigger_vec = v2;

  if (v1.empty() == true)
    return v2;
  if (v2.empty() == true)
    return v1;
  
  for (int i=0; i < bigger_vec.size(); i++)
    {
      int num = v1[i] + v2[i];
      sum.push_back(num);

    }
  
  return sum;
}




