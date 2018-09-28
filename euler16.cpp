/*********************************************************************
** Program Name: Euler16 - Power digit sum
** Problem URL: https://projecteuler.net/problem=16
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 9/2/2018

** Description:
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
*********************************************************************/
#include<iostream>
#include<string>

#define SIZE 1000

using std::string;
using std::to_string;
using std::cout;
using std::endl;

// function used for applying carries
void carry(string &str, int carry[]){

  // loop through string checking for carries
  for(int i = 0; i < str.length(); i++){
    if(carry[i]){
      switch (str[i]) {
        case '0': str[i] = '1';
        break;
        case '1': str[i] = '2';
        break;
        case '2': str[i] = '3';
        break;
        case '3': str[i] = '4';
        break;
        case '4': str[i] = '5';
        break;
        case '5': str[i] = '6';
        break;
        case '6': str[i] = '7';
        break;
        case '7': str[i] = '8';
        break;
        case '8': str[i] = '9';
        break;
        case '9': str[i] = '0';
                  carry[i+1] = 1;
        break;
      }
    }
  }

  if(carry[str.length()]){
    str += '1';
  }
}



int main(){
  // variable for calculating solution
  string squareStr = "2";
  int sum = 0;
  int carryArr[SIZE];


  for(int i = 0; i < SIZE-1; i++){
    // clear the temporary values
    int temp = 0;
    int count = squareStr.length();
    memset(carryArr, 0, sizeof(carryArr));

    // calculate the next square
    for(int j = 0; j < count; j++){
      temp = (int)squareStr[j];
      temp = (temp - 48) * 2;
      if(temp > 9){
        temp -= 10;
        squareStr[j] = (char)(temp + 48);

        carryArr[j+1] = 1;
      }
      else {
        squareStr[j] = (char)(temp + 48);
      }
    }

    // preform carry using carry array
    carry(squareStr, carryArr);
  }

  // sum the digits of the squares
  for(int i = 0; i < squareStr.length(); i++){
    sum += (int)squareStr[i];
    sum -= 48;
  }

  // print solution
  cout << sum << endl;

  return 1;
}
