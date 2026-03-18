#include <iostream>
#include <vector>
using namespace std;

// Function to check if we can cook P paranthas in given time
bool canCook(int P, vector<int> &ranks, int mid) {
    int totalParanthas = 0;

    for(int i = 0; i < ranks.size(); i++) {
        int R = ranks[i];
        int time = 0;
        int j = 1;

        // Count paranthas cooked by this cook
        while(true) {
            time += j * R;
            if(time > mid) break;
            totalParanthas++;
            j++;

            if(totalParanthas >= P) return true;
        }
    }

    return false;
}

int main() {
    int P, L;
    cin >> P;
    cin >> L;

    vector<int> ranks(L);
    for(int i = 0; i < L; i++) {
        cin >> ranks[i];
    }

    int low = 0;
    int high = 1e7; // large enough time
    int ans = 0;

    // Binary Search
    while(low <= high) {
        int mid = (low + high) / 2;

        if(canCook(P, ranks, mid)) {
            ans = mid;
            high = mid - 1; // try smaller time
        } else {
            low = mid + 1;
        }
    }

    cout << ans;

    return 0;
}