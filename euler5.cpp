/*********************************************************************
** Program Name: Euler5 - Smallest multiple
** Problem URL: https://projecteuler.net/problem=5
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/23/2018

** NOTE: this could be a bit faster. I plan to refactor this in a way
that creates a faster solution.

** Description:
2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20?
*********************************************************************/
#include<iostream>

#define SIZE 20

using std::cout;
using std::endl;

int main(){
  // variables for finding solution
  int solution = 0;
  long count = 40;

  // loop to test divisibility. start at 40 since no number
  // under 40 is divisible by 20
  while(solution == 0){
    // for testing for factors
    bool test = true;

    // check divisibility of 1 through SIZE
    for(int i = 1; i <= SIZE; i++){
      if(count % i != 0){
        test = false;
        break;
      }
    }

    if(test){
      solution = count;
    }

    count++;
  }

  // print solution
  cout << solution << endl;

  return 1;
}
