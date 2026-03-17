#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[30][30];

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;

    int i = 0, j = m - 1; // start from top-right
    int found = 0;

    while(i < n && j >= 0) {
        if(arr[i][j] == x) {
            found = 1;
            break;
        }
        else if(arr[i][j] > x) {
            j--; // move left
        }
        else {
            i++; // move down
        }
    }

    cout << found;
    return 0;
}