/*********************************************************************
** Program Name: Euler12 - Highly divisible triangular number
** Problem URL: https://projecteuler.net/problem=12
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/31/2018

** Description:
The sequence of triangle numbers is generated by adding the natural
numbers. So the 7th triangle number would
be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over
five divisors.
What is the value of the first triangle number to have over
five hundred divisors?
*********************************************************************/
#include<iostream>
#include<cmath>

#define SIZE 501

using std::cout;
using std::endl;

int main(){
  // variables to hold triangle numbers
  long triNum = 0;
  long solution = 0;

  // vector for finding factors
  int factors = 0;

  // loop counter / triangle number calculator
  long count = 1;

  // loop until first triangle number to have over
  // five hundred divisors is found
  while(solution == 0){
    triNum += count;
    factors = 0;

    // calculate this triNum's factors
    for(int i = 1; i < sqrt(triNum); i++){
      if(triNum % i == 0){
        factors++;
      }
    }

    // if factors are over SIZE get solution
    if(factors*2 >= SIZE){
      solution = triNum;
    }

    count++;
  }

  // print solution
  cout << solution << endl;


  return 1;
}
