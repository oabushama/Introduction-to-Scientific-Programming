/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** dynamicinit.cxx : initialization of vectors
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  //codesnippet dynamicinit
  {
    vector<int> numbers{5,6,7,8,9,10};
    cout << numbers[3] << endl;
  }
  {
    vector<int> numbers = {5,6,7,8,9,10};
    numbers[3] = 21;
    cout << numbers[3] << endl;
  }
  //codesnippet end
  

  return 0;
}
