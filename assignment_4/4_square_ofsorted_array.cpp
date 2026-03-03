#include <iostream>
#include <vector>
using namespace std;  
int main() {
    int left = 0, right, n-1;  
    int i=n-1;
    cin >> n;
    vector<int> nums(n);
          for (int i = 0, j = n - 1, k = n - 1; i <= j; --k) {
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if (a > b) {
                ans[k] = a;
                ++i;
            } else {
                ans[k] = b;
                --j;
            }
        }
        return ans;
    }