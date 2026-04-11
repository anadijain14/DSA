#include <iostream>
using namespace std;

int main() {
    int n, key, flag = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found";
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << "Not Found";

    return 0;
}