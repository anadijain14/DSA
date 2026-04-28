#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int>& num) {
    int n = num.size();
    vector<int> ans(n);

    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int ls = num[l];
        int rs = num[r];

        if (ls < rs) {
            ans[l] = ls;
        } else {
            ans[l] = rs;
        }

        l++;
        r--;
    }

    return ans;
}

int main() {
    vector<int> num = {5, 3, 8, 1, 9};
    vector<int> result = solve(num);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}