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

  cout << "End Bracket" << endl;
  {
    //codesnippet vectorpush
    vector<int> array(5,2);
    array.push_back(35);
    cout << array.size() << endl;
    cout << array[array.size()-1] << endl;
    //codesnippet end
  }
  cout << "... bracket" << endl;

  cout << "End Iterator" << endl;
  {
    //codesnippet vectorpushiterator
    vector<int> array(5,2);
    array.push_back(35);
    cout << array.size() << endl;
    cout << *( --array.end() ) << endl;
    //codesnippet end
  }
  cout << "... iterator" << endl;

  return 0;
}
