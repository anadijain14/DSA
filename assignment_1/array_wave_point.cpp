#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[10][10];

    // Input array
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Wave print column-wise
    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            // Top to bottom
            for(int i = 0; i < m; i++) {
                cout << arr[i][j] << ", ";
            }
        } else {
            // Bottom to top
            for(int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << ", ";
            }
        }
    }

    cout << "END";
    return 0;
}