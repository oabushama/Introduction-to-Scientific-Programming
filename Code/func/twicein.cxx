/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** twicein.cxx : simple function illustration
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

//examplesnippet twicein
int double_this(int n) {
  int twice_the_input = 2*n;
  return twice_the_input;
}
//examplesnippet end

int main() {
  //examplesnippet twicein
  int number = 3;
  cout << "Twice three is: " << 
    double_this(number) << endl;
  //examplesnippet end
  return 0;
}
