/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** range.cxx : range-based iteration over a class
 ****
 ****************************************************************/

#include <iostream>
using std::boolalpha;
using std::cout;
using std::endl;

//codesnippet bagdata
class bag {
  // basic data
private:
  int first,last;
public:
  bag(int first,int last) : first(first),last(last) {};
  //codesnippet end

  // search data & methods
  //codesnippet bagseek
private:
  int seek{0};
  //codesnippet end

  //codesnippet bagbeginend
public:
  bag &begin()  {
    seek = first; return *this;
  };
  bag end() {
    seek = last; return *this;
  };
  //codesnippet end

  //codesnippet bagtest
  bool operator!=( const bag &test ) const {
    return seek<=test.last;
  };
  //codesnippet end

  //codesnippet bagderef
  void operator++() { seek++; };
  int operator*() { return seek; };
  //codesnippet end

  //codesnippet baghastest
  bool has(int tst) {
    for (auto seek : *this )
      if (seek==tst) return true;
    return false;
  };
  //codesnippet end
};

int main() {

  cout << "Find" << endl;
  //codesnippet bagfinditer
  bag digits(0,9);

  bool find3{false};
  for ( auto seek : digits )
    find3 = find3 || (seek==3);
  cout << "found 3: " << boolalpha
       << find3 << endl;

  bool find15{false};
  for ( auto seek : digits )
    find15 = find15 || (seek==15);
  cout << "found 15: " << boolalpha
       << find15 << endl;
  //codesnippet end
  cout << ".. find" << endl;

  //codesnippet bagtestcall
  cout << "f3: " << digits.has(3) << endl;
  cout << "f15: " << digits.has(15) << endl;
  //codesnippet end

  return 0;
}
