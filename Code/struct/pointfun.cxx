/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** pointfun.cxx : function taking struct arguments
 ****
 ****************************************************************/

#include <cmath>

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct vector { double x; double y; } ;

//codesnippet structpass
double distance
  ( struct vector v1,
    struct vector v2 )
{
  double
    d1 = v1.x-v2.x, d2 = v1.y-v2.y;
  return sqrt( d1*d1 + d2*d2 );
}
//codesnippet end

int main() {

  cout << "Struct Pass" << endl;
  //codesnippet structpass
  struct vector v1 = { 1.,1. };
  cout << "Displacement x,y?";
  double dx,dy; cin >> dx >> dy; cout << endl;
  cout << "dx=" << dx << ", dy=" << dy << endl;
  struct vector v2 = { v1.x+dx,v1.y+dy };
  cout << "Distance: " << distance(v1,v2) << endl;
  //codesnippet end
  cout << ".. struct pass" << endl;

  cout << "Struct Denote" << endl;
  //codesnippet structdenote
  cout << "Distance: "
       << distance( {1.,2.}, {6.,14.} )
       << endl;
  //codesnippet end
  cout << ".. struct denote" << endl;
  
  return 0;
}

