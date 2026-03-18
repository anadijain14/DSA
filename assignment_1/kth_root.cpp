#include <iostream>
using namespace std;

// Function to check if mid^k <= n
bool isValid(long long mid, long long k, long long n) {
    long long result = 1;

    for(int i = 0; i < k; i++) {
        result *= mid;

        if(result > n) return false; // stop early
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        long long left = 1, right = n;
        long long ans = 1;

        while(left <= right) {
            long long mid = (left + right) / 2;

            if(isValid(mid, k, n)) {
                ans = mid;       // possible answer
                left = mid + 1;  // try bigger
            } else {
                right = mid - 1; // reduce
            }
        }

        cout << ans << endl;
    }

    return 0;
}