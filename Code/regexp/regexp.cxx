/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** regexp.cxx : regular expression
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <regex>
using std::regex;
using std::regex_match;

int main() {

  cout << "Looks like a name:" << endl;
  //codesnippet regexname
  vector<string> names {"Victor", "adam", "DoD"};
  auto cap = regex("[A-Z][a-z]+)");
  for ( auto n : names ) {
    auto match = regex_match( n, cap );
    cout << n;
    if (match) cout << ": yes";
    else       cout << ": no" ;
    cout << endl;
  }
  //codesnippet end

  return 0;
}
