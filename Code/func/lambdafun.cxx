/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** lambdafun.cxx : storing a lambda
 ****
 ****************************************************************/

//codesnippet lambdaclass
#include <functional>
using std::function;
//codesnippet end

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::to_string;

//codesnippet lambdaclass
class SelectedInts {
private:
  vector<int> bag;
  function< bool(int) > selector;
public:
  SelectedInts( function< bool(int) > f ) {
    selector = f; };
  void add(int i) {
    if (selector(i))
      bag.push_back(i);
  };
  int size() { return bag.size(); };
  std::string string() { std::string s;
    for ( int i : bag )
      s += to_string(i)+" ";
    return s;
  };
};
//codesnippet end

int main() {

  SelectedInts greaterthan5
    ( [] (int i) -> bool { return i>5; } );
  int upperbound = 20;
  for (int i=0; i<upperbound; i++)
    greaterthan5.add(i);
  // cout << "Ints under " << upperbound <<
  //   " greater than 5: " << greaterthan5.size() << endl;
  
  int divisor;
  cout << "Give a divisor: "; cin >> divisor; cout << endl;
  cout << ".. using " << divisor << endl;
  //codesnippet lambdaclassed
  SelectedInts multiples
    ( [divisor] (int i) -> bool {
	return i%divisor==0; } );
  for (int i=1; i<50; i++)
    multiples.add(i);
  //codesnippet end
  cout << "Multiples of " <<divisor << ": "
       << "\n"
       << multiples.string() << endl;

  return 0;
}
