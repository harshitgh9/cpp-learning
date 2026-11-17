/*
Return = return a value back to the 
spot where you invoked the function.
*/

#include <iostream>
using namespace std;

string concatStrings(string string1,string string2);
 
int main (){
    string firstName = "max";
    string lastName = "bully";
    string fullName = concatStrings(firstName,lastName);

    cout << "Hello " << fullName;
    return 0;
}
string concatStrings(string string1,string string2){
    return string1 + " " + string2;
} 