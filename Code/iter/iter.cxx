/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** iter.cxx : tinkering with iterators
 ****
 ****************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <memory>
using std::shared_ptr;

int main() {


  {
    cout << "Subvectorcopy" << endl;
    //codesnippet subvectorcopy
    vector<int> vec{11,22,33,44,55,66};
    auto second = vec.begin(); second++;
    auto before = vec.end(); before--;
    //    vector<int> sub(second,before);
    vector<int> sub(vec.data()+1,vec.data()+vec.size()-1);
    cout << "no first and last: ";
    for ( auto i : sub ) cout << i << ", ";
    cout << endl;
    vec.at(1) = 222;
    cout << "did we get a change in the sub vector? " << sub.at(0) << endl;
    //codesnippet end
    cout << ".. subvector" << endl;
  }

  {
    cout << "Subvectorassign" << endl;
    //codesnippet subvectorcopy
    vector<int> vec{11,22,33,44,55,66};
    auto second = vec.begin(); second++;
    auto before = vec.end(); before--;
    //    vector<int> sub(second,before);
    vector<int> sub; sub.assign(second,before);
    cout << "vector at " << (long)vec->data() << endl;
    cout << "sub at " << (long)sub->data() << endl;

    cout << "no first and last: ";
    for ( auto i : sub ) cout << i << ", ";
    cout << endl;
    vec.at(1) = 222;
    cout << "did we get a change in the sub vector? " << sub.at(0) << endl;
    //codesnippet end
    cout << ".. subvector" << endl;
  }

  {
    cout << "Subpointer" << endl;
    //codesnippet subpointer
    auto vec = shared_ptr<vector<int>>(new vector<int>{11,22,33,44,55,66});
    auto second = vec->begin(); second++;
    auto before = vec->end(); before--;
    auto sub = shared_ptr<vector<int>>(new vector<int>(second,before));
    cout << "vector at " << (long)vec->data() << endl;
    cout << "sub at " << (long)sub->data() << endl;
    cout << "no first and last: ";
    for ( auto i : *(sub.get()) ) cout << i << ", ";
    cout << endl;    
    vec->at(1) = 222;
    cout << "did we get a change in the sub vector? " << sub->at(0) << endl;
    //codesnippet end
    cout << ".. subpointer" << endl;
  }

  {
    //codesnippet iterderef
    vector<int> vec{11,22,33,44,55,66};
    auto second = vec.begin(); second++;
    cout << "Dereference second: "
	 << *second << endl;
    // DOES NOT COMPILE
    // the iterator is not a type-star:
    // int *subarray = second;
    //codesnippet end  
  }

  return 0;
}
