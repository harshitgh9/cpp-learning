/*
#VARIABLES- its the representation of some numbers or value
#there are 2 steps to create a variable 
1-Declaration
2-Assignment

int x; its declaration
x = 5 its assignment

#there are few data types to store value 
1-int = it holdes the value of integers.
it cant store the decimal.

2-double = this data type stores decimals also.

3-char = this data type stores single character like - a,b,c
we show it in single upper comma - 'a'

4-boolean = this data type store either true or false value

5-string = objects that represents a sequence of text

*/

#include<iostream>
using namespace std;
int main(){

    int x; // this is declaration 
  x = 5;//assignment
  int y=8;
  cout<<y<<endl;
cout<<x<<endl;
int sum = x+y;

// integer (whole number)
/* int age = 6;
    int year= 2012;
    int days = 4;
    
    the int data types contain the whole numbers*/

    // double (number including decimal)

    double price = 66.6;
    double gpa = 5.5;
    double temperature = 5.44;

    // single character 

    char grade = 'A';
    char initial = 'B';

    cout<<initial<<endl;

    // boolean (true or false)
    bool power = true;

    // string (objects that represents a sequence of text)

    string name = "chota bheem";
    cout<< name<<endl;
    string bodytype = "skinny";

    cout<<"human "<<name<<endl;
    cout<<"the grade of"<<name<<"is"<<grade;

cout<<sum<<endl;
return 0;

}