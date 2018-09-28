/*********************************************************************
** Program Name: Euler6 - Sum square difference
** Problem URL: https://projecteuler.net/problem=6
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/23/2018

** Description:
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first
ten natural numbers and the square of the sum is
3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one
hundred natural numbers and the square of the sum.
*********************************************************************/
#include<iostream>

#define SIZE 100

using std::cout;
using std::endl;

int main(){
  // variables for finding solution
  int sumOfSquares = 0;
  int squareOfSums = 0;
  int solution = 0;

  // sum all squares
  for(int i = 1; i <= SIZE; i++){
    sumOfSquares += (i * i);
  }

  // sum all sums
  for(int i = 1; i <= SIZE; i++){
    squareOfSums += i;
  }

  // square sums
  squareOfSums *= squareOfSums;

  // subtract sum of squares from square of sums
  solution = squareOfSums - sumOfSquares;

  // print the solution
  cout << solution << endl;

  return 1;
}
