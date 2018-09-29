/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** localparm.cxx : simple parameter passing
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

//examplesnippet localparm
void change_scalar(int i) { i += 1; }
//examplesnippet end

int main() {

  int number;

  //examplesnippet localparm
  number = 3;
  cout << "Number is 3: " << number << endl;
  change_scalar(number);
  cout << "is it still 3? Let's see: " << number << endl;
  //examplesnippet end
  
  return 0;
}
