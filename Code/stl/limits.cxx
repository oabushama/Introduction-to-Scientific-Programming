/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016=2020 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** limits.cxx : illustration of numeric limits
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <limits>
using std::numeric_limits;

int main() {
  int lasttest;

  cout << "Limit" << endl;
  //codesnippet stllimits
  cout << "Signed int: "
       << numeric_limits<int>::min() << " "
       << numeric_limits<int>::max()
       << endl;
  cout << "Unsigned    "
       << numeric_limits<unsigned int>::min() << " "
       << numeric_limits<unsigned int>::max()
       << endl;
  cout << "Single      "
       << numeric_limits<float>::min() << " "
       << numeric_limits<float>::max()
       << endl;
  cout << "Double      "
       << numeric_limits<double>::min() << " "
       << numeric_limits<double>::max()
       << endl;
  //codesnippet end
  cout << ".. limit" << endl;

  cout << "Macheps" << endl;
  //codesnippet stllimitfloat
  cout << "Single lowest "
       << numeric_limits<float>::lowest()
       << " and epsilon "
       << numeric_limits<float>::epsilon()
       << endl;
  cout << "Double lowest "
       << numeric_limits<double>::lowest()
       << " and epsilon "
       << numeric_limits<double>::epsilon()
       << endl;
  //codesnippet end
  cout << ".. macheps" << endl;

  return 0;
}
