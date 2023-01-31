/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong YI
Assignment: Lab 13 B

Sum of numbers in range
*/
#include <iostream>
using namespace std;

int sumRange(int left, int right){
  if (left <= right)
    return (left + (sumRange(left+1,right)));

  return 0;
}

int main(){
  int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
  int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52
}