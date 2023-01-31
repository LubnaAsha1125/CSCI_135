/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9B

while provided a class Coord3d
write function length()
that recieves coordinates of two points
and returns the pointer of the point
farther from the origin
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

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);

double length(Coord3D *p)
{
  double length = sqrt( (pow((*p).x,2)) + (pow((*p).y,2)) + (pow((*p).z,2)) );
  return length;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
  double lengthp1 = length(p1);
  double lengthp2 = length(p2);

  if (lengthp1 > lengthp2)
    return p1;
  else
    return p2;
}

int main()
{
  Coord3D pointP, pointQ;
  cout << "Enter the coordinates for Point P" << endl;
  cin >> pointP.x >> pointP.y >> pointP.z;
  cout << "And for Point Q" << endl;
  cin >> pointQ.x >> pointQ.y >> pointQ.z;
  
  cout << "Address of P: " << &pointP << endl;
  cout << "Address of Q: " << &pointQ << endl << endl;

  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
  cout << "ans = " << ans << endl; // So which point is farther?
}
