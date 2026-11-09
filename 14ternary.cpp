/*
#ternary operator ?: = its an replacement to an if/else statement

its written like this = condition ? expression1 : expression2;

*/

#include <iostream>
using namespace std;

int main() {

    int grade = 50;

    grade >=60 ? cout << "you pass!" : cout << "you fail!";
    
    /*
    we can also write this code like this = 

    cout << (grade >=60 "you pass" : "you fail");
    
    */
    
    
    return 0;
}