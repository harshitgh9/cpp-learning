 /*
 #Swich-its an alternative to use many if else statements
 */
 
 
 #include <iostream>
 using namespace std;

 int main(){

    char grade;
    cout <<"Enter your grade: ";
    cin >> grade;

    switch(grade){
        case 'a' :
        cout << "you are best";
        break;

        case 'b' :
        cout << "you are good";
        break;

        case 'c' :
        cout << "you are ok";
        break;

        case 'd' :
        cout << "you are not good";
        break;

        case 'f' :
        cout << "you are fail";
        break;

        default :
        cout << "please enter correct grade";

        return 0;
    }
                

    
 }