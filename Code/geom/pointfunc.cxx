/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointfun.cxx : class with method
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::sqrt;

//codesnippet pointfunc
class Vector {
private:
  double x,y;
public:
  Vector( double x,double y )
    : x(x),y(y) {};
  double length() {
    return sqrt(x*x + y*y); };
  double angle() {
    return 0.; /* something trig */; };
};

int main() {
  Vector p1(1.,2.);
  cout << "p1 has length "
       << p1.length() << endl;
//codesnippet end

  return 0;
}
