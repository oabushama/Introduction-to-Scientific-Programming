/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** width.cxx : setting output width
 ****
 ****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //codesnippet formatwidth6
  cout << "Width is 6:" << endl;
  for (int i=1; i<200000000; i*=10)
    cout << "Number: "
	 << setw(6) << i << endl;
  cout << endl;
  cout << "Width is 6:" << endl;
  cout << setw(6) << 1 << 2 << 3 << endl;
  cout << endl;
  //codesnippet end
  
  return 0;
}

