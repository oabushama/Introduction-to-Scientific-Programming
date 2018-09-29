#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "rvaluecopyhead.h"

integer::integer( int i ) : data(i) {
  std::cout << "construct " << i << std::endl;
};

integer::integer( const integer &i ) {
  data = i.data;
  std::cout << "copy!" << std::endl;
};

integer::integer( const integer &&i ) {
  data = i.data;
  std::cout << "ccopy!" << std::endl;
};

integer integer::operator+( const integer &i ) {
  return integer(data+i.data);
};

