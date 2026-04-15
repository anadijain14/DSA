#include <iostream>
using namespace std;

int power(int x, int y) {
    int result = 1;
    for(int i = 1; i <= y; i++) {
        result = result * x;
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter base and power: ";
    cin >> a >> b;

    cout << "Result = " << power(a, b);

    return 0;
}