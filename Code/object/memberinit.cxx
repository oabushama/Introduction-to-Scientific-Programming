#include <iostream>
using std::cout;
using std::endl;

class Inner {
private:
  int i;
public:
  Inner() {
    cout << "default constructor for Inner" << endl;
  };
  Inner( const Inner &in ) {
    cout << "copy constructor for Inner" << endl;
  };
  Inner(int i) : i(i) {
    cout << "regular constructor for Inner" << endl;
  };
};

class Outer {
  Inner one;
public:
  Outer(Inner i)
    : one(i) {};
  Outer(int i)
    : one(Inner(i)) {};
  Outer(int i,int j) {
    one = Inner(i); };
};

int main() {
  cout << "Set from Inner" << endl;
  Outer out1(Inner(1));
  cout  << endl;

  cout << "Set by member initialization" << endl;
  Outer out2(1);
  cout  << endl;

  cout << "Set by explicit creation" << endl;
  Outer out3(3,4);
  cout  << endl;

  return 0;
}
