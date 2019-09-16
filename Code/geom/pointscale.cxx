/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-9 Victor Eijkhout eijkhout@tacc.utexas.edu
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

//codesnippet pointscale
class Vector {
//codesnippet end
private:
  double vx,vy;
public:
  Vector( double x,double y ) {
    vx = x; vy = y;
  };
//codesnippet pointscale
  Vector scale( double a ) {
    return Vector( vx*a, vy*a ); };
//codesnippet end
  double length() { return sqrt(vx*vx + vy*vy); };
//codesnippet pointmultop
  Vector operator*(double factor) {
    return Vector(factor*vx,factor*vy);
  };
//codesnippet end
};
//codesnippet end

int main() {
  Vector p1(1.,2.);
  cout << "Scale2" << endl;
//codesnippet pointscale
  cout << "p1 has length "
       << p1.length() << endl;
  Vector p2 = p1.scale(2.);
  cout << "p2 has length "
       << p2.length() << endl;
//codesnippet end
  cout << "scale2" << endl;

  cout << "Mult2" << endl;
//codesnippet pointmultop
  cout << "p1 has length "
       << p1.length() << endl;
  Vector scale2r = p1*2.;
  cout << "scaled right: "
       << scale2r.length() << endl;
  // ILLEGAL Vector scale2l = 2.*p1;
//codesnippet end
  cout << "mult2" << endl;

  return 0;
}
