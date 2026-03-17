#include <iostream>
using namespace std;

int main() {
    int n, m, k, s;
    cin >> n >> m >> k >> s;

    char arr[100][100];

    // Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    bool possible = true;

    for(int i = 0; i < n && possible; i++) {
        for(int j = 0; j < m; j++) {

            if(arr[i][j] == '#') {
                break; // jump to next row
            }

            // Apply effect
            if(arr[i][j] == '.') {
                s -= 2;
            } 
            else if(arr[i][j] == '*') {
                s += 5;
            }

            // Step cost (except last column)
            if(j != m - 1) {
                s -= 1;
            }

            // Check strength condition
            if(s <= k) {
                possible = false;
                break;
            }
        }
    }

    if(possible && s >= k) {
        cout << "Yes" << endl;
        cout << s;
    } else {
        cout << "No";
    }

    return 0;
}