/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** optional.cxx : optional results
 ****
 ****************************************************************/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

#include <optional>
using std::optional;

#include <tuple>
using std::tuple;

//codesnippet rootorerror
bool RootOrError(float &x) {
  if (x<0)
    return false;
  else
    x = sqrt(x);
  return true;
};
//codesnippet end

//codesnippet rootandvalid
tuple<bool,float> RootAndValid(float x) {
  if (x<0)
    return {false,x};
  else
    return {true,sqrt(x)};
};
//codesnippet end

//codesnippet mayberootptr
optional<float> MaybeRootPtr(float x) {
  if (x<0)
    return {};
  else
    return sqrt(x);
};
//codesnippet end

int main() {

  float x;
  x = 2;
  //codesnippet rootorerror
  for ( auto x : {2.f,-2.f} ) 
    if (RootOrError(x))
      cout << "Root is " << x << endl;
    else
      cout << "could not take root of " << x << endl;
  //codesnippet end

  //codesnippet rootandvalid
  for ( auto x : {2.f,-2.f} ) 
    if ( auto [ok,root] = RootAndValid(x) ; ok )
      cout << "Root is " << root << endl;
    else
      cout << "could not take root of " << x << endl;
  //codesnippet end
  
  //codesnippet mayberootptr
  for ( auto x : {2.f,-2.f} ) 
    if ( auto root = MaybeRootPtr(x) ; root.has_value() )
      cout << "Root is " << *root << endl;
    else
      cout << "could not take root of " << x << endl;
  //codesnippet end

  return 0;
}

