/*
Author: Lubna Asha
Course: CSCI-136
Instructor: Tong YI
Assignment: Lab 13 C

Sum of elements in array
*/
#include <iostream>
using namespace std;
int sumArray(int *arr, int size);
int sumArrayInRange(int *arr, int left, int right);
  
int sumArrayInRange(int *arr, int left, int right){
  if (left < right)
    return (arr[left] + sumArrayInRange(arr, left+1, right));

  return 0;
}

int sumArray(int *arr, int size)
{
  int sum = sumArrayInRange(arr, 0, size);
  return sum;
}

int main() {

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
}