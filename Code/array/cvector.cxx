/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** cvector.cxx : vector from C array
 ****
 ****************************************************************/

#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main() {

  {
    int length{53};
    //codesnippet cvector1
    float *x;
    x = (float*)malloc(length*sizeof(float));
    //codesnippet end
    if (!x) {
      cerr << "Could not allocate example 1\n";
      throw(1);
    }
    //codesnippet cvector1
    vector<float> xvector(x,x+length);
    cout << "xvector has size: " << xvector.size() << endl;
    xvector.push_back(5);
    cout << "Push back was successful" << endl;
    cout << "pushed element: "
         << xvector.at(length) << endl;
    cout << "original array: "
	 << x[length] << endl;
    //codesnippet end
  }

  return 0;
}
