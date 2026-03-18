#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000][1000];

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Transpose and print
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}