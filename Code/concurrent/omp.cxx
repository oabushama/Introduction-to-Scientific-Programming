/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-9 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** cxx : example
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <atomic>
using std::atomic;
using std::memory_order_acquire;
using std::memory_order_relaxed;
using std::memory_order_release;

#ifndef EXPERIMENTS
#define EXPERIMENTS 100
#endif

int main() {

  {
    cout << "Old" << endl;
    for (int nexp=0; nexp<EXPERIMENTS; nexp++) {
      int x=0, y=0;
#pragma omp parallel sections
      {
#pragma omp section
	{ x = 1; y = 2; }
#pragma omp section
	{ cout << y << " "; cout << x << endl; }
      }
    }
    cout << "old" << endl;
  }

  {
    cout << "New" << endl;
    for (int nexp=0; nexp<EXPERIMENTS; nexp++) {
      atomic<int> x=0, y=0;
#pragma omp parallel sections
      {
#pragma omp section
	{ x.store(3); y.store(4); }
#pragma omp section
	{ cout << y.load() << " "; cout << x.load() << endl; }
      }
    }
    cout << "new" << endl;
  }

  {
    cout << "Relax" << endl;
    for (int nexp=0; nexp<EXPERIMENTS; nexp++) {
      atomic<int> x=0, y=0;
#pragma omp parallel sections
      {
#pragma omp section
	{ x.store(5,memory_order_relaxed); 
	  y.store(6,memory_order_relaxed);
	}
#pragma omp section
	{ cout << y.load(memory_order_relaxed) << " ";
	  cout << x.load(memory_order_relaxed) << endl;
	}
      }
    }
    cout << "relax" << endl;
  }

  {
    cout << "Release" << endl;
    for (int nexp=0; nexp<EXPERIMENTS; nexp++) {
      atomic<int> x=0, y=0;
#pragma omp parallel sections
      {
#pragma omp section
	{ x.store(7,memory_order_release);
	  y.store(8,memory_order_release);
	}
#pragma omp section
	{ cout << y.load(memory_order_acquire) << " ";
	  cout << x.load(memory_order_acquire) << endl;
	}
      }
    }
    cout << "release" << endl;
  }

  return 0;
}
