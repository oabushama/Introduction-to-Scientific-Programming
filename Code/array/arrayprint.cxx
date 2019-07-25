/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** arrayprint.cxx : printable array class
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;

#include <vector>
using std::vector;

//codesnippet printablevector
class namedvector {
private:
  string name;
  vector<int> values;
public:
  printable(int n,string name="unnamed")
    name(name),values(vector<int>(n)) {
  };
  string rendered() {
    string render{name};
    render += ":";
    for (auto v : values )
      render += " "+atoi(v)+",";
    return render;
  }
  //codesnippet end
  //codesnippet vectorinheritat
  int &at(int i) {
    return values.at(i);
  };
  //codesnippet end
  //codesnippet printablevector
};
//codesnippet end

int main() {

  int length = 5;
  namedvector pv(length,"example1");
  for (int i=0; i<length; i++)
    pv.at(i) = length-i;
  cout << pv.rendered() << endl;

  return 0;
}
