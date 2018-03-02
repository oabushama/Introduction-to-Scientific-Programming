/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** io.cxx : formatted io
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::right;
using std::setbase;
using std::setfill;
using std::setw;

int main() {

  cout << "Unformatted:" << endl;
  //nosnippet cunformat
  for (int i=1; i<200000000; i*=10)
    cout << "Number: " << i << endl;
  cout << endl;
  //nosnippet end
  cout << "--unformatted" << endl;
  
  cout << "Width is 6:" << endl;
  cout << setw(6) << 1 << 2 << 3 << endl;
  cout << endl;
  
  cout << "Set width:" << endl;
  //nosnippet formatwidth6
  cout << "Width is 6:" << endl;
  for (int i=1; i<200000000; i*=10)
    cout << "Number: "
	 << setw(6) << i << endl;
  cout << endl;
  //nosnippet end
  cout << "--set width:" << endl;
  
  cout << "Padding:" << endl;
  //nosnippet formatpad
  for (int i=1; i<200000000; i*=10)
    cout << "Number: "
	 << setfill('.') << setw(6) << i << endl;
  cout << endl;
  //nosnippet end
  cout << "--padding:" << endl;
  
  cout << "Left align:" << endl;
  //nosnippet formatleft
  for (int i=1; i<200000000; i*=10)
    cout << "Number: "
	 << left << setfill('.') << setw(6) << i << endl;
  //nosnippet end
  cout << endl;
  cout << "--left align:" << endl;

  cout << "Base 16:" << endl;
  //nosnippet format16
  cout << setbase(16) << setfill(' ');
  for (int i=0; i<16; i++) {
    for (int j=0; j<16; j++)
      cout << i*16+j << " " ;
    cout << endl;
  }
  //nosnippet end
  cout << endl;
  cout << "--base 16:" << endl;
  
  return 0;
}

