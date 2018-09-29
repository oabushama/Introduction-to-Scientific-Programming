/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** address.cxx : pointer from address
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;

class HasY {
public:
  double y;
  HasY( double y) : y(y) {};
};

int main() {
  HasY y(5);
  //codesnippet shareaddress
  auto
    p1 = shared_ptr<HasY>( &y ),
    p2 = shared_ptr<HasY>( &y );
  p1->y = 3;
  cout << "Pointer 2's y: "
       << p2->y << endl;
  //codesnippet end
}
