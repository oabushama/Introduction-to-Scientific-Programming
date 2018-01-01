/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** fio.cxx : file io
 ****
 ****************************************************************/

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //codesnippet fio
  ofstream file_out;
  file_out.open("fio_example.out");
  //codesnippet end

  int number;
  cout << "A number please: ";
  cin >> number;
  //codesnippet fio
  file_out << number << endl;
  file_out.close();
  //codesnippet end
  cout << "Written." << endl;

  return 0;
}

