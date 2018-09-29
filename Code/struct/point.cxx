/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** point.cxx : struct for cartesian vector
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//codesnippet structdef
struct vector { double x; double y; int label; } ;
//codesnippet end

//codesnippet structuse
int main() {

  struct vector v1,v2;

  v1.x = 1.; v1.y = 2.; v1.label = 5;
  v2 = {3.,4.,5};

  v2 = v1;
  cout << "v2: " << v2.x << "," << v2.y << endl;
  //codesnippet end
  
  return 0;
}

