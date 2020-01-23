/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** ifinit.cxx : conditionals with init part
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;
#include <cstdio>

int main() {

  //codesnippet ifinitchar
  if ( char c = getchar(); c!='a' )
    cout << "Not an a, but: " << c << endl;
  else
    cout << "That was an a!" << endl;
  //codesnippet end

  return 0;
}

