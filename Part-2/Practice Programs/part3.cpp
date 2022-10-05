// Main function of the C++ program.

#include <iostream>
using namespace std;
struct Point {
  double x, y;
};
struct Disk {
  Point center;
  double radius;
};
int main() {
  Point p1;
  Disk d1;
  p1.x = 0.5;
  p1.y = 0.9;
  d1.center = p1;
  d1.radius = 3.2;
  cout << p1.x << " " << d1.radius;
}


/*
Expected output : 
0.5 3.2

*/