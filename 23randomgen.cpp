#include <iostream>
using namespace std;
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: cout << "you win a sticker" << endl;
        break;

        case 2: cout << "you win a shirt" << endl;
        break;

        case 3: cout << "you win a i phone" << endl;
        break;

        case 4: cout << "you win a pagani gtr" << endl;
        break;

    }

    return 0;

}
