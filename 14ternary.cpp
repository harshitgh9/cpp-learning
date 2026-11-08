#include <iostream>
using namespace std;

int main() {
    int num = 10;

    string result = (num % 2 == 0) ? "Even" : "Odd";

    cout << result;

    return 0;
}