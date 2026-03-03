// #include <iostream>
// #include <vector>
// using namespace std;  
// int main() {
//     int left = 0, right, n-1;  
//     int i=n-1;
//     cin >> n;
//     vector<int> nums(n);
//           for (int i = 0, j = n - 1, k = n - 1; i <= j; --k) {
//             int a = nums[i] * nums[i];
//             int b = nums[j] * nums[j];
//             if (a > b) {
//                 ans[k] = a;
//                 ++i;
//             } else {
//                 ans[k] = b;
//                 --j;
//             }
//         }
//         return ans;
//     }



// #include <iostream>
// #include <vector>           
// using namespace std;

// vector<int> sortedSquares(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n);

//     int left = 0, right = n - 1;

//      (left <= right) {
//         int a = nums[left] * nums[left];
//         int b = nums[right] * nums[right];

    
//     for (int i = 0, j = n - 1, k = n - 1; i <= j; --k) {
//         int a = nums[i] * nums[i];
//         int b = nums[j] * nums[j];
//         if (a > b) {
//             ans[k] = a;
//             ++i;
//         } else {
//             ans[k] = b;
//             --j;
//         }
//     }
//     return ans;
// }



#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int i = 0;          // left pointer
    int j = n - 1;      // right pointer
    int k = n - 1;      // position to fill from back

    while (i <= j) {
        int a = nums[i] * nums[i];
        int b = nums[j] * nums[j];

        if (a > b) {
            ans[k] = a;
            i++;
        } else {
            ans[k] = b;
            j--;
        }
        k--;
    }

    return ans;
}

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);

    for (int x : result) {
        cout << x << " ";
    }
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){

// vector<int> sortedSquares(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n);

//     int left = 0;          // left pointer
//     int right = n - 1;      // right pointer
//     int k = n - 1;      // position to fill from back

//     while (left <= right) {
//         int a = nums[left] * nums[left];
//         int b = nums[right] * nums[right];

//         if (a > b) {
//             ans[k] = a;
//             left++;
//         } else {
//             ans[k] = b;
//             right--;
//         }
//         k--;
//     }

//     return ans;
// }
// }