/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016/7 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** filesize.cxx : testing file size with C++17
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <experimental/filesystem>

int main() {


  auto filesize = std::experimental::filesystem::file_size("testfile");
  
  return 0;
}

