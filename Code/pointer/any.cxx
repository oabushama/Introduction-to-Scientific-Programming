/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** any.cxx : instead of opaque pointers
 ****
 ****************************************************************/

#include <any>
#include <iostream>
using std::cout;
using std::endl;

int main()
{
  cout << std::boolalpha;

  //codesnippet opaqueany
  std::any a = 1;
  cout << a.type().name() << ": " << std::any_cast<int>(a) << endl;
  a = 3.14;
  cout << a.type().name() << ": " << std::any_cast<double>(a) << endl;
  a = true;
  cout << a.type().name() << ": " << std::any_cast<bool>(a) << endl;

  try {
    a = 1;
    cout << std::any_cast<float>(a) << endl;
  } catch (const std::bad_any_cast& e) {
    cout << e.what() << endl;
  }
  //codesnippet end

  return 0;
}
