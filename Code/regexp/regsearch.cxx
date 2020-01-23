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
using std::smatch;

#include <cassert>

int main() {

  string sentence = "The quick brown fox jumps over the lazy dog";
  smatch match;
  //codesnippet regsearch
  {
    auto findthe = regex("the");
    auto found = regex_search( sentence, match ,findthe );
    assert( found==true );
    cout << "Found <<the>> at " << match.position(0) << endl;
  }
  {
    auto findthx = regex("[Tt]h.*x");
    auto found = regex_search( sentence, match ,findthx );
    assert( found==true );
    cout << "Found <<thx>>"
	 << " at " << match.position(0)
	 << " as " << match.str(0)
	 << endl;
  }
  //codesnippet end

  return 0;
}
