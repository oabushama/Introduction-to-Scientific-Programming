/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** ed.cxx : precision stuff
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  //codesnippet helloc
  double e1 = .1f;
  double d1 = .1;
  cout << e1 << endl;
  cout << d1 << endl;
  cout << e1-d1 << endl;
  //codesnippet end
  return 0;
}
