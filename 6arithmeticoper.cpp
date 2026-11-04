/* 
Arithmetic operators = use to solve a 
specific arithmetic operation (+ - * /)

#ADDITION 
minions = minions + 4;
minions+=4;
minions++;(if we want to add one used in loops commonly)

SUBTRACT
minions = minions - 4;
minions-=5;
minions--;(if we want to subtract one used in loops commonly)

MULTIPLICATION
minions*=4;

DIVISION
minions/=5;

We can use '%' MODULUS to find remainder of the number , also used in 
finding even and odd numbers.

These arithmetic operation has operater precendence -

paranthesis > multiplication and division > add and sub

*/

#include <iostream>
using namespace std;

int main(){
int minions  = 50;
int remainder = minions%6;
   cout << remainder;

}

    