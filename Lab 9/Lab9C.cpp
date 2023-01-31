/*
Author: Lubna Asha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9C

while provided a class Coord3d
write function that takes the input 
of the position and velocity of an object
and moves it to new position 
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
} pos , vel;

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
  (*ppos).x = (*ppos).x + (*pvel).x * dt;
  (*ppos).y = (*ppos).y + (*pvel).y * dt;
  (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

int main()
{
  double dt;
  cout << "Enter position of object: " << endl;
  cin >> pos.x >> pos.y >> pos.z;
  cout << "Enter velocity of object: " << endl;
  cin >> vel.x >> vel.y >> vel.z;
  cout << "Enter elapsed time: " << endl;
  cin >> dt;

  move(&pos, &vel, dt);
  cout << pos.x << " " << pos.y << " " << pos.z << endl;
}
