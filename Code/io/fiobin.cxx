/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** fiobin.cxx : binary file io
 ****
 ****************************************************************/

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //codesnippet fiobin
  ofstream file_out;
  file_out.open("fio_binary.out",ios::binary);
  //codesnippet end

  int number;
  cout << "A number please: ";
  cin >> number;
  //  file_out << number ;
  //codesnippet fiobin
  file_out.write( (char*)(&number),4);
  //codesnippet end
  file_out.close();
  cout << "Written." << endl;

  return 0;
}

