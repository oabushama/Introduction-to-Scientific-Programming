/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017/8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** adjacent1.cxx : adjacency matrix implementation, dense
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

class State {
private:
  vector<float> probabilities;
public:
  State() {};
  State(int size) {
    probabilities = vector<float>(size,0.);
  };
  float &at(int i) { return probabilities.at(i); };
  const int size() const { return probabilities.size(); };
  // iterating
  auto begin() { return probabilities.begin(); };
  auto end() { return probabilities.end(); };
};

class AdjacencyMatrix {
private:
  vector<State> pages;
public:
  //! Create a square matrix of a specified size.
  //! We allocate a dense array of bools as a vector of vectors.
  AdjacencyMatrix(int size) {
    pages = vector<State>(size,State(size));
  };
  //! Add a page by setting the corresponding boolean.
  //! This models a link from page i to page j.
  void addpage(int i,int j) {
    // test whether i,j already exists
    pages.at(i).at(j) = 1;
  };
  //! Count the number of links from a page.
  int number_of_outlinks(int page) {
    int count{0};
    for ( int ip=0; ip<pages.at(page).size(); ip++)
      if (pages.at(page).at(ip)) count++;
    // for ( auto l : pages.at(page) )
    //   if (l) count++;
    return count;
  };
  //! Given a probability vector, compute a new vector
  State transition( State state ) {
    // basic compatibility checking
    int n = state.size();
    if (n!=pages.size()) {
      cout << "State vector has length " << n
	   << "; incompatible with matrix of size " << pages.size() << endl;
      throw(1); }
    State newstate(n);
    for (int page=0; page<n; page++) {
      if (state.at(page)>0) {
	// if we are on page `page'
	float probability_per_link = 1./number_of_outlinks(page);
	float probability_for_page = state.at(page);
	for (int link=0; link<n; link++) {
	  // follow all the links
	  if (pages.at(page).at(link))
	    newstate.at(link) += probability_per_link * probability_for_page;
	}
      }
    }
    return newstate;
  };
  void print() {
    for (int irow=0; irow<pages.size(); irow++) {
      cout << "Page " << irow << " has links: ";
      for (int icol=0; icol<pages.at(irow).size(); icol++)
	if (pages.at(irow).at(icol))
	  cout << icol << ", ";
      cout << endl;
    }
  };
};

int main() {

  int number_of_pages = 25, max_nzeros_per_row = 4;
  AdjacencyMatrix web(number_of_pages);
  State probability_vector(number_of_pages);

  {
    cout << "Bidiagonal adjacency matrix" << endl;
    // fill in matrix
    for (int page=0; page<number_of_pages; page++) {
      web.addpage(page,page);
      if (page<number_of_pages-1)
	web.addpage(page,page+1);
    }

    // print matrix
    web.print();

    // start on page one
    probability_vector.at(0) = 1.;
  }

  // now do a number of transition steps
  for (int step=0; step <5; step++) {
    cout << "Step " << step << endl;
    int page;
    for (page=0; page<number_of_pages; page++) {
      if (web.number_of_outlinks(page)>0) {
	State new_probability = web.transition(probability_vector);
	float sum_of_probabilities{0};
	int count{0};
	for ( auto p : new_probability ) {
	  sum_of_probabilities += p; count++ ; }
	cout << "On page " << page << ", sum of " << count << " outgoing probabilities="
	     << sum_of_probabilities << endl;
      }
    }
    cout << endl;
  }

  return 0;
}
#if 0
  {
    cout << "Bidiagonal adjacency matrix" << endl;
  // fill in matrix
    for (int page=0; page<number_of_pages; page++) {
      int nzeros = max_nzeros_per_row * ( (float)rand() )/RAND_MAX;
      for (int zero=0; zero<nzeros; zero++) {
	int col = max_nzeros_per_row * ( (float)rand() )/RAND_MAX;
	web.addpage(page,col);
      }
    }

    // print matrix
    web.print();

    // start on a random page
    vector<float> probability_vector(number_of_pages,0.), new_probability;
    {
      int random_page = number_of_pages * ( (float)rand() )/RAND_MAX;
      probability_vector.at(random_page) = 1.;
    }
  }

    // start on a random page
    vector<float> probability_vector(number_of_pages,0.), new_probability;
    {
      int random_page = number_of_pages * ( (float)rand() )/RAND_MAX;
      probability_vector.at(random_page) = 1.;
    }

#endif
