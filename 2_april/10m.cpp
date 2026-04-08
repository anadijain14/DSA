#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;   // 1 ≤ n ≤ 10^4

    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leaders;

    int maxRight = arr[n - 1];

    // Last element is always a leader
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    // Print leaders in correct order
    for (int i = leaders.size() - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }

    return 0;
}