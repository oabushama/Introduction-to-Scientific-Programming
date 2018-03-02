/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** staticbound.cxx : bound checking
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  //codesnippet arrayinit
  {
    int numbers[] = {5,4,3,2,1};
    cout << numbers[3] << endl;
  }
  {
    int numbers[5]{5,4,3,2,1};
    numbers[3] = 21;
    cout << numbers[3] << endl;
  }
  {
    int numbers[5] = {2};
    numbers[3] *= 2;
    cout << numbers[3] << endl;
  }
  //codesnippet end
  
  return 0;
}
