/*********************************************************************
** Program Name: Euler3 - Largest prime factor
** Problem URL: https://projecteuler.net/problem=3
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 7/20/2018

** Description:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*********************************************************************/
#include<iostream>
#include<cmath>

#define SIZE 600851475143

using std::cout;
using std::endl;

int main(){
  // variables
  long largestPrime = SIZE;

  // test every number from SIZE-1 down to the square root of SIZE
  // for primality
  for(long i = 2; i <= sqrt(SIZE); i++){
    // if Size is divisible by i test
    if(SIZE % i == 0){
      // used to check primality of i
      bool test = true;

      // test for factors of i
      for(long j = 2; j <= sqrt(i); j++){

        // if factor exists i is not prime
        if(i % j == 0){
          test = false;
          break;
        }
      }

      // if i was prime this is the largest prime factor of SIZE
      if(test && (largestPrime < i || largestPrime == SIZE)){
        largestPrime = i;
      }

      // the following checks for values from sqrt of SIZE to
      // half of SIZE. It only checks the inverse factors of
      // factors found by the previous method (2 to sqrt of SIZE)
      test = true;

      // test for factors of i
      for(long j = 2; j <= sqrt(SIZE/i); j++){

        // if factor exists i is not prime
        if(SIZE/i % j == 0){
          test = false;
          break;
        }
      }

      // if i was prime this is the largest prime factor of SIZE
      if(test && (largestPrime < SIZE/i || largestPrime == SIZE)){
        largestPrime = SIZE/i;
      }
    }
  }

  // print solution
  cout << largestPrime << endl;

  return 0;
}
