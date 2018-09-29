/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** linear.cxx : redistricting exercise with linear districts
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <random>
using std::rand;

#include <vector>
using std::vector;

int district_surplus_after_vote
    (int voter_number,vector<int> votes,vector<int> &assignment)
{
  int last_district_created, surplus1,surplus2;
  vector<int> assignment1,assignment2;
  if (voter_number==0)
    last_district_created = -1;
  else
    last_district_created = assignment1[voter_number-1];

  // case: current voter to current district
  if (voter_number>0) {
    assignment1 = assignment;
    assignment1[voter_number] = last_district_created;
    surplus1 = count_surplus(votes,assignment1,voter_number);
  }

  // case: close current district and make new district from current voter
  {
    assignment2 = assignment;
    assignment2[voter_number] = last_district_created+1;
    surplus2 = count_surplus(votes,assignment2,voter_number);
  }
    
}

float lowest_rule(vector<int> votes) {
  vector<int> assignment(votes.size(),-1);
  return district_surplus_after_vote(votes.size()-1,votes,assignment);
}

int main() {

  // initialize random generator
  srand(100*time(NULL)%100);
  
  int population_size;
  cout << "Population size? ";
  cin >> population_size;
  cout << endl;
  float majority_percentage;
  cout << "Majority percentage? ";
  cin >> majority_percentage;
  cout << endl;

  vector<int> votes(population_size);
  int actual_majority{0};
  for ( auto &v : votes ) {
    if (rand()/float(RAND_MAX)<majority_percentage) {
      v = 1;
      actual_majority++;
    } else v = 0;
  }
  cout << "Actual majority: " << actual_majority << endl;
  
  float ruling_fraction;
  ruling_fraction = lowest_rule(votes);
  cout << "Minority rules" << ruling_fraction << endl;

  return 0;
}
