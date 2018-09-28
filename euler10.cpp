/*********************************************************************
** Program Name: Euler10 - Summation of primes
** Problem URL: https://projecteuler.net/problem=10
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/29/2018

** Description:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*********************************************************************/
#include<iostream>
#include<cmath>

using std::cout;
using std::endl;

#define SIZE 2000000

int main(){
  // variable for finding solution
  long primeSum = 0;

  // loop through every number below and including size and test
  // for primality
  for(int i = 1; i <= SIZE; i++){
    bool test = true;

    // find if this number is prime
    for(int j = 2; j < sqrt(i); j++){
      if(i % j == 0){
        test = false;
        break;
      }
    }

    // if it was prime add it to the sum
    if(test){
      primeSum += i;
    }
  }

  // print the solution
  cout << primeSum << endl;

  return 1;
}
