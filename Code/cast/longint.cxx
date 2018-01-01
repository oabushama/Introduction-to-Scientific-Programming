/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** longing.cxx : cast int
 ****
 ****************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  //codesnippet longintcast
  int hundredk = 100000;
  int overflow;
  overflow = hundredk*hundredk;
  //codesnippet end
  cout << "overflow: " << overflow << endl;
  
  //codesnippet longintcast
  size_t bignumber = static_cast<size_t>(hundredk)*hundredk;
  //codesnippet end
  cout << "bignumber: " << bignumber << endl;
  
  return 0;
}
