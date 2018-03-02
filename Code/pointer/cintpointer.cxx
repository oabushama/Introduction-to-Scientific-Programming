/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** cintpointer.cxx : oldstyle C pointers
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

int main() {

  //codesnippet cintpointer
  int i;
  int* addr = &i;
  i = 5;
  cout << *addr << endl;
  i = 6;
  cout << *addr << endl;
  //codesnippet end

  return 0;
}
