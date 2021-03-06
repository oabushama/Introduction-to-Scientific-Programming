/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointinit.cxx : about object initialization
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//codesnippet classpointinitxy
class Vector {
private:
  double x,y;
public:
  Vector( double x,double y ) : x(x),y(y) {
  }
//codesnippet end
  double getx() { return x; };
  double gety() { return y; };
};

int main() {
//codesnippet classpointinitxy
  Vector p1(1.,2.);
  cout << "p1 = "
       << p1.getx() << "," << p1.gety()
       << endl;
//codesnippet end

  return 0;
}
