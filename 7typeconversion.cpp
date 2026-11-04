/*
#In C++, type conversion means changing a value from one data type to another.
There are two common ways to do this:

1-Implicit type conversion — C++ automatically converts the data type.

double burger = 34.50;
int price = burger;

cout << price;

2-Explicit type conversion (casting) — You manually tell C++ to convert the data type.

    double pizza = 6.99;
    int price = (int)pizza; The (int) tells C++ to convert pizza from double to int.
    cout << price;
    
    #Type conversion changes the data type, not the information that was already lost.
*/

#include<iostream> 
using namespace std;

int main(){
    
   int  burger = 34.50;
   int  pizza = 6.99; 
   double  x = pizza + burger;
   
   cout<<x<<"breakfast available in shop";
    return 0;
}