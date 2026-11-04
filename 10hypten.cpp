/*
This program is to find hypotenuse of triange using 
math function 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){


double a;
double b;
double c;

cout<< "the side a is : ";
cin>>a;

cout<< "the side b is : ";
cin>>b;


c = sqrt(pow(a , 2) + pow (b , 2));
 
cout <<"the side c is : "<< c ;

return 0 ;

}