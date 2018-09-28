/*********************************************************************
** Program Name: Euler7 - 10001st prime
** Problem URL: https://projecteuler.net/problem=7
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/23/2018

** Description:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we
can see that the 6th prime is 13.
What is the 10001st prime number?
*********************************************************************/
#include<iostream>
#include<cmath>

#define SIZE 10001

using std::cout;
using std::endl;

int main(){
  // variables for finding solution
  int prime = 0;
  int numToTest = 1;
  int count = 0;

  // loop over each number testing for primality until the 10001st
  // prime number is found
  while(count <= SIZE){
    // for testing if prime
    bool test = true;

    // test for factors of the current number
    for(int i = 2; i <= sqrt(numToTest); i++){
      if(numToTest % i == 0){
        test = false;
        break;
      }
    }

    // test if found to be prime make new highest
    if(test){
      prime = numToTest;
      count++;
    }

    numToTest++;
  }

  // print solution
  cout << prime << endl;

  return 1;
}
