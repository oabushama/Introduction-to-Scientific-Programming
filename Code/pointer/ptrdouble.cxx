/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** ptrdouble.cxx : shared pointers to scalar
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <memory>
using std::shared_ptr;
using std::make_shared;

int main() {

  cout << "Double" << endl;
  {
    //codesnippet ptrdouble
    // shared pointer to allocated double
    auto array = shared_ptr<double>( new double );
    double *ptr = array.get();
    array.get()[0] = 2.;
    cout << ptr[0] << endl;
    //codesnippet end
  }
  cout << "double" << endl;
  cout << "Init" << endl;
  {
    //codesnippet ptrdoubleinit
    // shared pointer to initialized double
    auto array = make_shared<double>(50);
    double *ptr = array.get();
    cout << ptr[0] << endl;
    //codesnippet end
  }
  cout << "init" << endl;
  

  return 0;
}
