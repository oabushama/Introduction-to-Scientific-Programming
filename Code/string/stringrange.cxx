/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** stringrange.cxx : range over string
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {

  cout << "Index" << endl;
  //codesnippet stringindex
  string abc = "abc";
  cout << "By character: ";
  for (int ic=0; ic<abc.size(); ic++)
    cout << abc[ic] << " ";
  cout << endl;
  //codesnippet end
  cout << ".. index" << endl;

  cout << "Range" << endl;
  //codesnippet stringrange
  cout << "By character: ";
  for ( char c : abc )
    cout << c << " ";
  cout << endl;
  //codesnippet end
  cout << ".. range" << endl;
  
  cout << "Set" << endl;
  //codesnippet stringrangeset
  for ( char &c : abc )
    c += 1;
  cout << "Shifted: " << abc << endl;
  //codesnippet end
  cout << ".. set" << endl;
  
  return 0;
}
