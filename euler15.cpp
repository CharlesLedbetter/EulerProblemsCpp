/*********************************************************************
** Program Name: Euler15 - Lattice paths
** Problem URL: https://projecteuler.net/problem=15
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 9/21/2018

** Description:
Starting in the top left corner of a 2×2 grid, and only being able to
move to the right and down, there are exactly 6 routes to the bottom
right corner.
How many such routes are there through a 20×20 grid?
*********************************************************************/
#include<iostream>
#include<string>

#define DIGITLENGTH 40.0
#define ONESCOUNT 20.0

using std::cout;
using std::endl;

// common solution found many places online (honestly why is
// this not in math.h?). I converted it to double to hold the large
// numbers produced by this particular problem.
double factorial(double fac){
  return (fac == 1.0 || fac == 0.0) ? 1.0 : factorial(fac - 1.0) * fac;
}

int main(){
  // variable for calculating answer
  double solution = 0.0;

  // To solve this problem we can use 1 to represent a move to the
  // right and 0 to represent a move downward. To reach the bottom
  // right corner from the top right the path must always include
  // 20 zeros and 20 ones. So this is just a simple combinatorics
  // problem. How many combinations of 20 ones and 20 zeros are
  // there in a 40 digit binary number? Or (since there are only
  // two possible digits) How many 40 digit binary numbers contain
  // exactly 20 0's.
  solution = factorial(DIGITLENGTH) / (factorial(ONESCOUNT) *
             factorial(DIGITLENGTH - ONESCOUNT));

  cout << (unsigned long long)solution << endl;

  return 1;
}
