/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** vectorrangeref.cxx : range-based indexing by reference
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  //codesnippet vectorrangeref
  vector<float> myvector
    = {1.1, 2.2, 3.3};
  for ( auto &e : myvector )
    e *= 2;
  cout << myvector.at(2) << endl;
  //codesnippet end

  return 0;
}
