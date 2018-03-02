/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** vectorend.cxx : example of vector end iterator
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  //codesnippet vectorend
  vector<int> array(5,2);
  array.push_back(35);
  cout << array.size() << endl;
  cout << *( --array.end() ) << endl;
  //codesnippet end

  return 0;
}
