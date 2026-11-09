#include <iostream>
using namespace std;

int main(){

    double temp;
    char unit;

    cout << "TEMPERATURE CONVERTER" << endl;
    cout << "C = Celcius" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "Enter the unit : ";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){

        cout << "Enter the temperature in C :";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temp in F is :"<< temp << endl;
    }

    else if(unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in F :";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temp in C is :"<< temp << endl;
    }

    else{
        cout << "Please enter correct unit !" << endl;
    }

    cout << ":::::::::::::::::::::::::";


    return 0;
}