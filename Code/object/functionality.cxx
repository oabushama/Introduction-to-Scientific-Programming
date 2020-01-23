/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** functionality.cxx : illustrating object functionality
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
using std::sqrt;

//codesnippet functionalityconstruct
class Vector {
private: // members
  double x,y;
public: // methods
  Vector( double x,double y )
    : x(x),y(y) {};
  //codesnippet end
  //codesnippet stationalitymethod
  void scaleby( double a ) {
    x *= a; y *= a; };
  //codesnippet end
  //codesnippet functionalitymethod
  double length() {
    return sqrt(x*x + y*y); };
  double angle() {
    return atan(y/x);
  };
};
//codesnippet end

int main() {
  //codesnippet functionality
  Vector v(1.,2.); // make vector (1,2)
  cout << "vector has length "
       << v.length() << endl;
  v.scaleby(2.);
  cout << "vector has length "
       << v.length() << endl
       << "and angle " << v.angle()
       << endl;
  //codesnippet end

  //codesnippet functionalitymethoduse
  Vector vec(5,12);
  double
    s = vec.length(),
    a = vec.angle();
  //codesnippet end

  return 0;
}

#if 0
//codesnippet functionalityconstructmyx
class Vector {
private: // members
  double my_x,my_y;
public: // methods
  Vector( double in_x,double in_y )
    : my_x(in_x),my_y(in_y) {};
  //codesnippet end
#endif
