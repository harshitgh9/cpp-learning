/*
Logical operators - 

&& = And logical op used to check if two 
condition is true.

|| = OR logical op used to check if at least one 
of two conditions is true.

/ ! = NOT logical op - its reverse the logical state of its operand
 
*/
#include <iostream>
using namespace std;

int main(){

    int temp;

    bool sunny = true ;
    cout << "enter the temperature : ";
    cin >> temp;

    if(temp <= 0 || temp >= 30){
        cout << "the temperature is bad." << endl;

    }

    else{

        cout << "the temperature is good." << endl;
    }

    if(sunny){

        cout << "it is sunny outside" << endl;
    }

    else{

        cout << "its not sunny outside" << endl;
    }


    return 0;
}