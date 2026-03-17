#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[10][10];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    while(top <= bottom && left <= right){

        // Print left column
        for(int i = top; i <= bottom; i++){
            cout << arr[i][left] << ", ";
        }
        left++;

        // Print bottom row
        for(int i = left; i <= right; i++){
            cout << arr[bottom][i] << ", ";
        }
        bottom--;

        // Print right column
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << arr[i][right] << ", ";
            }
            right--;
        }

        // Print top row
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                cout << arr[top][i] << ", ";
            }
            top++;
        }
    }

    cout << "END";

    return 0;
}