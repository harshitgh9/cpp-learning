/*
#if statements = you do something if a condition is true
if not , then dont do it.

#the arrangement of if else and if statements matter in code.
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age: ";
    cin >> age;

    if(age >=100){
        cout<<"you are still alive UNC";
    }

    else if(age >=18){
        cout<<"welcome to our world , HA HA HA !";
    }
    else if(age <0){
        cout<<"you are in balls lad ,come after some months";

    }
    
    else{
        cout<<"get out of here , this is private property";
    }
    return 0;
}