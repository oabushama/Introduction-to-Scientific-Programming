/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** reduce.cxx : use of reductions
 ****
 ****************************************************************/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <numeric>
using std::accumulate;
using std::multiplies;

int main() {

  {
    cout << "Accumulate .." << endl;
    //codesnippet vecaccumulate
    vector<int> v{1,3,5,7};
    auto first = v.begin();
    auto last  = v.end();
    auto sum = accumulate(first,last,0);
    cout << "sum: " << sum << endl;
    //codesnippet end
    cout << ".. accumulate" << endl;
  }

  {
    cout << "Product .." << endl;
    //codesnippet vecproduct
    vector<int> v{1,3,5,7};
    auto first = v.begin();
    auto last  = v.end();
    first++; last--;
    auto product =
      accumulate
        (first,last,2,multiplies<>());
    cout << "product: " << product << endl;
    //codesnippet end
    cout << ".. product" << endl;
  }

  return 0;
}

