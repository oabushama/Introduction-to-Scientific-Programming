/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016/7 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointfunref.cxx : passing structure by ref
 ****
 ****************************************************************/

#include <cmath>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct vector { double x; double y; } ;

//codesnippet structpassref
double distance( const struct vector &v1,const struct vector &v2 ) {
  double d1 = v1.x-v2.x, d2 = v1.y-v2.y;
  return sqrt( d1*d1 + d2*d2 );
}
//codesnippet end

int main() {

  struct vector v1,v2;

  v1.x = 1.; v1.y = 1.;
  v2.x = 4.; v2.y = 5.;

  cout << "Distance: " << distance(v1,v2) << endl;
  
  return 0;
}

