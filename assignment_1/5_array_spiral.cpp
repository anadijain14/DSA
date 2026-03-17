#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[100][100];

    // Input
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while(top <= bottom && left <= right) {

        // Top row
        for(int j = left; j <= right; j++) {
            cout << arr[top][j] << ", ";
        }
        top++;

        // Right column
        for(int i = top; i <= bottom; i++) {
            cout << arr[i][right] << ", ";
        }
        right--;

        // Bottom row
        if(top <= bottom) {
            for(int j = right; j >= left; j--) {
                cout << arr[bottom][j] << ", ";
            }
            bottom--;
        }

        // Left column
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout << arr[i][left] << ", ";
            }
            left++;
        }
    }

    cout << "END";
    return 0;
}