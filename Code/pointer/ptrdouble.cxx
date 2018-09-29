/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** ptrdouble.cxx : shared pointers to scalar
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;
using std::make_shared;

int main() {

  //codesnippet ptrdouble
  auto array = shared_ptr<double>( new double );
  shared_ptr<double> other;
  array.get() = 2.;
  other = array;
  cout << other.get() << endl;
  //codesnippet end

  return 0;
}
