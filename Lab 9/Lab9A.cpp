/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9A

while provided a class Coord3d
write function length()
that recieves coordinates of point P 
and computes the distance 
from origin to the point
*/
#include <iostream>
#include <cmath>
using namespace std;

class Coord3D 
{
  public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p)
{
  double length = sqrt( (pow((*p).x,2)) + (pow((*p).y,2)) + (pow((*p).z,2)) );
  return length;
}

int main()
{
  Coord3D pointP;
  cout << "Enter the coordinates for Point P: " << endl;
  cin >> pointP.x >> pointP.y >> pointP.z; //if coord. were 10, 20, 30
  
  cout << length(&pointP) << endl; // would print 37.4166
}