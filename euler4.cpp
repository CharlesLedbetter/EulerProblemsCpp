/*********************************************************************
** Program Name: Euler4 - Largest palindrome product
** Problem URL: https://projecteuler.net/problem=4
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 7/20/2018

** Description:
A palindromic number reads the same both ways. The largest
palindrome made from the product of two 2-digit numbers is
9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit
numbers.
*********************************************************************/
#include<iostream>
#include<string>

#define HIGH_SIZE 999
#define LOW_SIZE 99

using std::string;
using std::to_string;
using std::cout;
using std::endl;

int main() {
  // variables for finding solution
  string palindrome = "";
  string half1 = "";
  string half2 = "";
  int answer = 0;

  // loop through all possible products checking for palindromes
  for(int i = HIGH_SIZE; i > LOW_SIZE; i--){
    bool test = true;
    for(int j = i; j > LOW_SIZE; j--){
      test = true;
      palindrome = to_string(i * j);

      if(palindrome.length() % 2 == 0){
        half1 = palindrome.substr(0, palindrome.length()/2);
        half2 = palindrome.substr(palindrome.length()/2, palindrome.length()-1);
      }
      else {
        half1 = palindrome.substr(0, palindrome.length()/2);
        half2 = palindrome.substr((palindrome.length()/2)+1, palindrome.length()-1);
      }

      for(int k = 0; k < half1.length(); k++){
        if(half1[k] != half2[half2.length() - (k+1)]){
          test = false;
          break;
        }
      }

      // set new highest palindrome product
      if(test){
        if((i * j) > answer){
          answer = i * j;
        }
        break;
      }
    }
  }

  // print solution
  cout << answer << endl;

  return 1;
}
