/*
#The const keyword specifies that a variable value
is constant . it tells the compiler to prevent anything 
from modifying it , so its read only

#used in values that are constant like speed of light, value of pi

*/




#include<iostream>
using namespace std;
int main(){

    const double PI = 3.14;
    double radius = 44;
    double circumference = 2 * PI * radius;
    cout<<circumference<<" cm"<<endl;
    return 0;
}