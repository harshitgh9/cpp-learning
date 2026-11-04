/*
Mathematical Operations

c = max(a,b); - greater number will be shown.
c = min(a , b); - smaller number will be shown.
c = pow(5,3); - power function , 5 to the power 3 .
c = sqrt(25); - squareroot of numbers.
c = abs(-111); - absolute value. its like mod in math always give +ve value
c = round(a); its like a round off 
c = ceil(a); its like a round off but always upper value
c = floor(a); its like round off but lower value

*/

#include <iostream>  
#include <cmath>
using namespace std;

int main(){


    double a = 5.77;
    double b = 7;
    double c;
    
    c = floor(a); //its like a round down 

    cout <<c;
}
