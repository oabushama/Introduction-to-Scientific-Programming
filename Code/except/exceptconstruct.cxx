/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** exceptconstruct.cxx : exception on sqrt of negative
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

class Azero {
public:
  Azero(int i) {
    if (i!=0)
      throw(string("A arg has to be zero"));
    cout << "Succeeded building A with i="
	 << i << endl;
  };
};

class Bequal : public Azero {
public:
  Bequal(int i,int j) : Azero(i-j) {
    cout << "Succeeded building B with i="
	 << i << ", j=" << j << endl;
  };
};

class Cequal : public Azero {
public:
  Cequal(int i,int j)
    try : Azero(i-j) {
      cout << "Succeeded building C with i="
	   << i << ", j=" << j << endl;
    } catch (string s) {
      cout << "Failed to construct C because A threw: " << s << endl;
    }
};

int main() {

  for (int i=0; i<=1; i++) {
    try {
      Azero zero(i);
    } catch (string s) {
      cout << "A constructor failed: " << s << endl;
    }
  }
  cout << endl;

  int j=3;
  for (int i=j; i<=j+1; i++) {
    try {
      Bequal equal(i,j);
    } catch (string s) {
      cout << "B constructor failed: " << s << endl;
    }
  }
  cout << endl;

  for (int i=j; i<=j+1; i++) {
    try {
      Cequal equal(i,j);
    } catch (string s) {
      cout << "C constructor failed: " << s << endl;
    }
  }
  cout << endl;

  return 0;
}
