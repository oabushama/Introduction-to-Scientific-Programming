/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016/7 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** actors.cxx : the bones of a graphics program
 ****
 ****************************************************************/

#include <iostream>
using namespace std;


class position {
  //Clip
  int pos{0};
  //clip
public:
  position() {};
  position(int initial) { /* ... */ };
  void move(int distance) {
    //Ignore
    pos += distance;
    //ignore
  };
  //Ignore
  void print() { cout << pos; };
  //ignore
};

class actor {
protected:
  int speed;
  position current;
public:
  actor() { current = position(0); };
  void move(int duration) {
    /* THIS IS THE EXERCISE */
    //Ask
    current.move(speed*duration);
    //ask
  };
  void print () { current.print(); };
};
class human : public actor {
public:
  human() {
    //Ask
    speed = 1;
    //ask
  };
};
class airplane : public actor {
public:
  airplane() {
    //Ask
    speed = 10;
    //ask
  };
};
int main() {
  human Alice;
  airplane Seven47;
  Alice.move( 5 );
  Seven47.move( 5 );
  //Ignore
  cout << "Alice is at " ; Alice.print() ;   cout << endl;
  cout << "747 is at " ;   Seven47.print() ; cout << endl;
  //ignore
  return 0;
}
