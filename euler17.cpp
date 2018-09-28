/*********************************************************************
** Program Name: Euler17 - Number letter counts
** Problem URL: https://projecteuler.net/problem=17
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 9/3/2018

** Description:
If the numbers 1 to 5 are written out in words: one, two, three,
four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used
in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were
written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342
(three hundred and forty-two) contains 23 letters and 115
(one hundred and fifteen) contains 20 letters. The use of
"and" when writing out numbers is in compliance with British usage.
*********************************************************************/
#include<iostream>
#include<string>

#define SIZE 1000

using std::string;
using std::to_string;
using std::cout;
using std::endl;

int main(){
  // variable for calculating solution
  int sum = 0;

  for(int i = 1; i <= SIZE; i++){
    string digitStr = "";
    digitStr = to_string(i);

    // if the value is one thousand simply add 11 to sum
    if(digitStr.length() == 4){
      sum += 11;
    }

    // otherwise find number of letters for digit
    else{
      // used to determine digit size
      int offset = 0;
      bool teen = false;

      // get lengths for hundreds place
      if(digitStr.length() == 3){
        switch (digitStr[0]) {
          case '1':
          case '2':
          case '6': sum += 3 + 7;
          break;
          case '4':
          case '5':
          case '9': sum += 4 + 7;
          break;
          case '3':
          case '7':
          case '8': sum += 5 + 7;
          break;
        }
        if(digitStr[1] != '0' || digitStr[2] != '0'){
          sum += 3;
        }
      }

      // get number of letters for tens place
      if(digitStr.length() > 1){
        // set offset for tens place
        if(digitStr.length() == 3){
          offset = 1;
        }
        else {
          offset = 0;
        }

        switch (digitStr[offset]) {
          case '4':
          case '5':
          case '6': sum += 5;
          break;
          case '2':
          case '3':
          case '8':
          case '9': sum += 6;
          break;
          case '7': sum += 7;
          break;
          case '1': teen = true;
                    switch (digitStr[offset+1]) {
                      case '0': sum += 3;
                      break;
                      case '1':
                      case '2': sum += 6;
                      break;
                      case '5':
                      case '6': sum += 7;
                      break;
                      case '3':
                      case '4':
                      case '8':
                      case '9': sum += 8;
                      break;
                      case '7': sum += 9;
                      break;
                    }
        }
      }



      // set offset for ones place
      if(!teen){
        offset = digitStr.length()-1;

        // find number of letters in ones place
        switch (digitStr[offset]) {
          case '1':
          case '2':
          case '6': sum += 3;
          break;
          case '4':
          case '5':
          case '9': sum += 4;
          break;
          case '3':
          case '7':
          case '8': sum += 5;
          break;
        }
      }
    }
  }

  // print solution
  cout << sum << endl;

  return 1;
}
