/*Namespace = its like a giving a variable a value but code will always give 
precedence to local variable that is available in main function 
if you want the value of namespace variable you have 
to enter - 
 
"cout<<namespace variable name::value that u want"; 
'::' this is called scope resolution operator.*/


#include<iostream>
using namespace std;

namespace first{

    int x = 5;
}

namespace second{
    int y=3;
}

int main(){

    int x=4;
    cout<<second::y;

    return 0;
}

