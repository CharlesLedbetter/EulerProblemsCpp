/*********************************************************************
** Program Name: Euler8 - Largest product in a series
** Problem URL: https://projecteuler.net/problem=8
** Solution Author: Charles Joshua Ledbetter
** Date Solved: 8/27/2018

** Description:
The four adjacent digits in the 1000-digit number that have the
greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that
have the greatest product. What is the value of this product?
*********************************************************************/
#include<cstdlib>
#include<iostream>
#include<string>

using std::string;
using std::to_string;
using std::cout;
using std::endl;

int main(){
  // load series into variable
  string setStr = "73167176531330624919";
  setStr.append("22511967442657474235");
  setStr.append("53491949349698352031");
  setStr.append("27745063262395783180");
  setStr.append("16984801869478851843");
  setStr.append("85861560789112949495");
  setStr.append("45950173795833195285");
  setStr.append("32088055111254069874");
  setStr.append("71585238630507156932");
  setStr.append("90963295227443043557");
  setStr.append("66896648950445244523");
  setStr.append("16173185640309871112");
  setStr.append("17223831136222989342");
  setStr.append("33803081353362766142");
  setStr.append("82806444486645238749");
  setStr.append("30358907296290491560");
  setStr.append("44077239071381051585");
  setStr.append("93079608667017242712");
  setStr.append("18839987979087922749");
  setStr.append("21901699720888093776");
  setStr.append("65727333001053367881");
  setStr.append("22023542180975125454");
  setStr.append("05947522435258490771");
  setStr.append("16705560136048395864");
  setStr.append("46706324415722155397");
  setStr.append("53697817977846174064");
  setStr.append("95514929086256932197");
  setStr.append("84686224828397224137");
  setStr.append("56570560574902614079");
  setStr.append("72968652414535100474");
  setStr.append("82166370484403199890");
  setStr.append("00889524345065854122");
  setStr.append("75886668811642717147");
  setStr.append("99244429282308634656");
  setStr.append("74813919123162824586");
  setStr.append("17866458359124566529");
  setStr.append("47654568284891288314");
  setStr.append("26076900422421902267");
  setStr.append("10556263211111093705");
  setStr.append("44217506941658960408");
  setStr.append("07198403850962455444");
  setStr.append("36298123098787992724");
  setStr.append("42849091888458015616");
  setStr.append("60979191338754992005");
  setStr.append("24063689912560717606");
  setStr.append("05886116467109405077");
  setStr.append("54100225698315520005");
  setStr.append("59357297257163626956");
  setStr.append("18826704282524836008");
  setStr.append("23257530420752963450");

  // variables used to print solution
  string subSet = "";
  long solution = 0;

  // loop counter
  int count = 12;

  // loop through setStr comparing products
  while(count < setStr.length()){
    long temp = 0;
    temp = ((long)setStr[count-12] - 48) * ((long)setStr[count-11] - 48) *
      ((long)setStr[count-10] - 48) * ((long)setStr[count-9] - 48) *
      ((long)setStr[count-8] - 48) * ((long)setStr[count-7] - 48) *
      ((long)setStr[count-6] - 48) * ((long)setStr[count-5] - 48) *
      ((long)setStr[count-4] - 48) * ((long)setStr[count-3] - 48) *
      ((long)setStr[count-2] - 48) * ((long)setStr[count-1] - 48) *
      ((long)setStr[count] - 48);

    if(temp > solution){
      solution = temp;
      subSet = setStr.substr(count-12,13);
    }
    count++;
  }

  // print solution
  cout << "subset: " << subSet << endl;
  cout << "solution: " + to_string(solution) << endl;

  return 1;
}
