/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointstruct.cxx : OOP stuff with a struct
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//codesnippet structobj
struct object {
  ~object() { cout << "bye bye" << endl; }
};
struct vector : public object {
  double x; double y;
  double xpp() { x = x+1; return x; };
  vector() { x = 1; };
} ;
//codesnippet end

int main() {

  {
    struct vector p1;

    cout << p1.xpp() << endl;
    cout << p1.xpp() << endl;
    cout << p1.xpp() << endl;
  }
  
  return 0;
}

