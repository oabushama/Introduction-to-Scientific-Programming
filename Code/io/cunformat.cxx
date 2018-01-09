/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** cunformat.cxx : default formatting
 ****
 ****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //codesnippet cunformat
  for (int i=1; i<200000000; i*=10)
    cout << "Number: " << i << endl;
  cout << endl;
  //codesnippet end

  return 0;
}

