/****************************************************************
 ****
 **** This file belong longs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018/9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** rsa.cxx : simulation of RSA encryption
 **** following https://www.geeksforgeeks.org/rsa-algorithm-cryptography/
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

long long gcd(long long i,long long j) {
  if (i>j)
    return gcd(j,i);
  else {
    if (j%i==0)
      return i;
    else
      return gcd(j%i,i);
  }
};

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

long long phi_n(long long p,long long q) {
  return (p-1)*(q-1);
};

long long e_under_phi(long long n,long long phi) {
  long long e=3;
  while ( gcd(n,e)!=1 )
    e++;
  if (e>=phi) {
    cout << "Could not find e under phi" << endl;
    throw(1);
  }
  return e;
};

auto crypt(vector<long long> msg,long long n,long long e) {
  vector<long long> crypted;
  for ( auto c : msg ) {
    long long nd  = 1;
    for ( int id=0; id<e; id++) {
      if (nd>numeric_limits<long long>::max()/c) {
	cout << "cryption overflows at power " << id << endl;
	throw(1);
      }
      nd = (nd%n) * c ; // nd *= c;
    }
    crypted.push_back( nd%n );
  }
  return crypted;
};

auto encrypt(string msg, long long n,long long e) {
  vector<long long> msgnums;
  for ( auto c : msg )
    msgnums.push_back(c);
  return crypt(msgnums,n,e);
};

auto decrypt(vector<long long> cmsg,long long n,long long d) {
  string dmsg;
  for ( auto c : crypt(cmsg,n,d) ) {
    dmsg.push_back(c);
  };
  return dmsg;
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

  long long phi = phi_n(factor1,factor2);
  long long e = e_under_phi(bignum,phi);

  int k=2;
  long long d = (k*phi+1)/e;
  cout << "  and d=" << d << endl;
  
  vector<long long> encrypted;
  try {
    encrypted = encrypt("message",bignum,e);
  } catch (...) {
    cout << "cryption failed" << endl;
    return 1;
  }

  cout << "encrypted:";
  for ( auto c : encrypted ) cout << " " << c;
  cout << endl;

  // the key is bignum,d so we can use that
  auto decrypted = decrypt(encrypted,bignum,d);
  
  cout << "decrypted:";
  for ( auto c : decrypted ) cout << " " << c;
  cout << endl;

  return 0;
}
