/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** rvaluecopy.cxx : non-working illustration of rvalue references
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class integer {
public:
  int data{0};
public:
  integer() {};
  integer( int i ) : data(i) {};
  integer( const integer &i ) {
    data = i.data;
    cout << "copy!" << endl;
  };
  integer( const integer &&i ) {
    data = i.data;
    cout << "ccopy!" << endl;
  };
  integer operator+( const integer &i ) {
    return integer(data+i.data);
  };
};

int main() {

  integer one(1),two(2);
  integer three( one+two );
  cout << three.data << endl;
  
  return 0;
}
