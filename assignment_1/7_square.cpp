#include <iostream>
using namespace std;

long long squareRoot(long long A) {
    long long low = 0, high = A, ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (mid * mid == A) {
            return mid;  // perfect square
        }
        else if (mid * mid < A) {
            ans = mid;   // possible answer
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans; // floor value
}

int main() {
    long long A;
    cin >> A;

    cout << squareRoot(A);

    return 0;
}