/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** ptrarray.cxx : pointer to C style array
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;
using std::make_shared;

int main() {

  //codesnippet ptrarray
  auto array = make_shared<double>(50);
  shared_ptr<double> other;
  array.get()[2] = 3.;
  // the following two are ILLEGAL:
  // array->at(2) = 4.;
  // array.get().at(2) = 4.;
  other = array;
  cout << other.get()[2] << endl;
  //codesnippet end

  return 0;
}
