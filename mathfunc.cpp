#include <iostream> 
#include <cmath>
using namespace std;

int main(){


    double a = 5.77;
    double b = 7;
    double c;
    // c = max(a,b)
    //c = min(a , b);
   // c = pow(5,3);
   // c= sqrt(25);
   // c= abs(-111); irs like mod in math always give +ve value
    //c = round(a); its like a round off 
    //c= ceil(a); its like a round off but always upper value
    c = floor(a); //its like a round down 

    cout <<c;
}
