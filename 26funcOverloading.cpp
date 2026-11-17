#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);

int main(){
    bakePizza("chilli");

    return 0;
}

void bakePizza(){
    cout << "he he i ate your pizza" << endl;
}

void bakePizza(string topping1){
    cout << "i am not giving u " << topping1 << "haha" << endl;
}
