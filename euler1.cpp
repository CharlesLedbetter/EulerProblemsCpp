/*********************************************************************
** Program Name: Euler1 - Multiples of 3 and 5
** Problem URL: https://projecteuler.net/problem=1
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 7/19/2018

** Description:
If we list all the natural numbers below 10 that are multiples of 3
or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*********************************************************************/
#include<iostream>

#define SIZE 1000

using std::cout;
using std::endl;

int main(){
  // variable for finding solution
  int sum = 0;

  // preform the summing operation
  for(int i = 0; i < SIZE; i++){
    if(i % 3 == 0){
      sum += i;
    }
    else if(i % 5 == 0){
      sum += i;
    }
  }

  // print solution
  cout << sum << endl;

  return 0;
}
