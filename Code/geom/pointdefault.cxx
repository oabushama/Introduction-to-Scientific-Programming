/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointscale.cxx : Vector class with private data
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::sqrt;

class Vector {
private:
  double vx,vy;
public:
//codesnippet pointdef1
  Vector() {};
  Vector( double x,double y ) {
    vx = x; vy = y;
  };
//codesnippet end
  Vector scale( double a ) {
    return Vector( vx*a, vy*a ); };
  double length() { return sqrt(vx*vx + vy*vy); };
};

int main() {
//codesnippet pointdef2
  Vector v1(1.,2.), v2;
  cout << "v1 has length " << v1.length() << endl;
  v2 = v1.scale(2.);
  cout << "v2 has length " << v2.length() << endl;
//codesnippet end

  return 0;
}
