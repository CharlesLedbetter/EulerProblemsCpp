/*********************************************************************
** Program Name: Euler14 - Longest Collatz sequence
** Problem URL: https://projecteuler.net/problem=14
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 9/1/2018

** Description:
The following iterative sequence is defined for the set of positive
integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following
sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1)
contains 10 terms. Although it has not been proved yet
(Collatz Problem), it is thought that all starting numbers
finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above
one million.
*********************************************************************/
#include<iostream>

#define SIZE 1000000

using std::cout;
using std::endl;

// recursive function that finds solutions to Collatz problems
int collatz(long term, long count){
  if(term == 1){
    return count;
  }
  else if(term % 2 == 0){
    return collatz(term/2, count+1);
  }
  else{
    return collatz((3 * term)+1, count+1);
  }
}



int main(){
  // variable for calculating solution
  long mostTerms = 0;
  long solution = 0;

  for(long i = 1; i <= SIZE; i++){
    // counter for tracking terms
    // call recursive function to find solution
    long temp = collatz(i, 1);

    // test that new number of terms is more then old largest
    if(temp > mostTerms){
      mostTerms = temp;
      solution = i;
    }
  }

  // print solution
  cout << "number of terms: " << mostTerms << endl;
  cout << "solution: " << solution << endl;

  return 1;
}
