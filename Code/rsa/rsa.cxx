/****************************************************************
 ****
 **** This file belong longs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018/9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** rsa.cxx : simulation of RSA encryption
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

#include <limits>
using std::numeric_limits;

bool test_if_prime(long long number) {
  for (long long divisor=2; divisor<number; divisor++) {
    if (number%divisor==0) {
      return false;
    }
  }
  return true;
};

long long next_prime(long long start) {
  start += 1 - start%2; // make odd
  while (!test_if_prime(start))
    start += 2;
  return start;
};

auto encrypt(string msg,long long n,long long d) {
  vector<long long> encrypted;
  for ( auto c : msg ) {
    long long nd  = 1;
    for ( int id=0; id<d; id++) {
      if (nd>numeric_limits<long long>::max()/c) {
	cout << "encryption overflows at power " << id << endl;
	throw(1);
      }
      nd *= c;
    }
    encrypted.push_back( nd%n );
  }
  return encrypted;
};

int main() {
  long long factor1;
  cout << "First factor should be above: ";
  cin >> factor1; cout << endl;

  factor1 = next_prime(factor1);
  long long factor2 = next_prime(factor1+1);
  cout << "Found factors " << factor1 << "," << factor2 << endl;
  long long bignum = factor1*factor2;
  cout << "  with product=" << bignum << endl;
  long long d = next_prime(factor2+1);
  if (d>=bignum) {
    cout << "Could not find d" << endl; return 1;
  }
  cout << "  and d=" << d << endl;
  
  vector<long long> crypt;
  try {
    crypt = encrypt("message",bignum,d);
  } catch (...) {
    cout << "encryption failed" << endl;
    return 1;
  }
  cout << "encrypted:";
  for ( auto c : crypt ) cout << " " << c;
  cout << endl;

  return 0;
}
