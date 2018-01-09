/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** format16.cxx : base 16 formatted io
 ****
 ****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //codesnippet format16
  cout << setbase(16) << setfill(' ');
  for (int i=0; i<16; i++) {
    for (int j=0; j<16; j++)
      cout << i*16+j << " " ;
    cout << endl;
  }
  //codesnippet end
  
  return 0;
}

