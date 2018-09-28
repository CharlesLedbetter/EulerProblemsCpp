/*********************************************************************
** Program Name: Euler9 - Special Pythagorean triplet
** Problem URL: https://projecteuler.net/problem=9
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/29/2018

** Description:
A Pythagorean triplet is a set of three natural numbers,
a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for
which a + b + c = 1000.
Find the product abc.
*********************************************************************/
#include<iostream>

#define SIZE 1000

using std::cout;
using std::endl;

int main(){
  // variables for finding solution
  int a = 1;
  int b = 1;
  int c = 1;
  int solution = 0;
  bool found = false;

  // use a nest of loops to test each combination of triplets
  // the first loop represents a
  for(int i = 1; i <= SIZE; i++){
    if(found){
      break;
    }

    // the second loop represents b
    for(int j = 1; j <= SIZE - i; j++){
      if(found){
        break;
      }

      // the third loop represents c
      for(int k = 1; k <= SIZE - (i+j); k++){

        // perform the calculation to test for Pythagorean triplet
        if((i*i)+(j*j) == (k*k) && i+j+k == SIZE){
          a = i;
          b = j;
          c = k;
          solution = i*j*k;
          found = true;
          break;
        }
      }
    }
  }

  // print formula and solution
  cout << "formula: " << a << " " << b << " " << c << endl;
  cout << "solution: " << solution << endl;

  return 1;
}
