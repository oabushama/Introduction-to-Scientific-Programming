/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** intchar.cxx : int/char equivalence
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main() {

  //codesnippet intchar
  char ex = 'x';
  int x_num = ex, y_num = ex+1;
  char why = y_num;
  cout << "x is at position " << x_num
       << endl;
  cout << "; one further lies " << why
       << endl;
  //codesnippet end

  return 0;
}
