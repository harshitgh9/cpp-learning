#include<iostream>
using namespace std;
int main(){
    //the const keyword tells that the variable value
    //is constant (read only)

    const double PI = 3.14;
    double radius = 44;
    double circumference = 2 * PI * radius;
    cout<<circumference<<" cm"<<endl;
    return 0;
}