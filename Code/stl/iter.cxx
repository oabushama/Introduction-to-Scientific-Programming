/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** itera.cxx : use of iterators
 ****
 ****************************************************************/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  {
    cout << "Iter" << endl;
    //codesnippet veciterator
    vector<int> v{1,3,5,7};
    auto pointer = v.begin();
    cout << "we start at "
	 << *pointer << endl;
    pointer++;
    cout << "after increment: "
	 << *pointer << endl;

    pointer = v.end();
    cout << "end is not a valid element: "
	 << *pointer << endl;
    pointer--;
    cout << "last element: "
	 << *pointer << endl;
    //codesnippet end
    cout << "iter" << endl;
  }

  {
    cout << "Erase.." << endl;
    //codesnippet vecerase
    vector<int> v{1,3,5,7,9};
    cout << "Vector: ";
    for ( auto e : v ) cout << e << " ";
    cout << endl;
    auto first = v.begin();
    first++;
    auto last = v.end();
    last--;
    v.erase(first,last);
    cout << "Erased: ";
    for ( auto e : v ) cout << e << " ";
    cout << endl;
    //codesnippet end
    cout << "..erase" << endl;
  }

  return 0;
}

