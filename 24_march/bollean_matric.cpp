#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int mat[100][100];

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int row[100] = {0};
    int col[100] = {0};

    // Step 1: Mark rows and columns
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Modify matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }

    // Step 3: Print matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}