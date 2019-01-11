/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016/7 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** quote.cxx : quote handling
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {

  //codesnippet quotestring
  string
    one("a b c"),
    two("a \"b\" c"),
    three( R"("a ""b """c)" );
  cout << one << endl;
  cout << two << endl;
  cout << three << endl;
  //codesnippet end
  
  return 0;
}
