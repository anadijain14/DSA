#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int even = 0, odd = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}