/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointadd.cxx : function returning struct
 ****
 ****************************************************************/

#include <cmath>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct vector { double x; double y; } ;

//codesnippet structreturn
struct vector vector_add
      ( struct vector v1,
        struct vector v2 ) {
   struct vector p_add =
     {v1.x+v2.x,v1.y+v2.y};
   return p_add;
};
//codesnippet end

int main() {

  struct vector v1,v2,v3;

  v1.x = 1.; v1.y = 1.;
  v2 = {4.,5.};

//codesnippet structreturn
  v3 = vector_add(v1,v2);
  cout << "Added: " <<
    v3.x << "," << v3.y << endl;
//codesnippet end
  
  return 0;
}

