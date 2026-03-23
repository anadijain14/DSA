#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {

        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        int n, m;
        cin >> n >> m;

        vector<int> rick(n), cab(m);

        for (int i = 0; i < n; i++)
            cin >> rick[i];

        for (int i = 0; i < m; i++)
            cin >> cab[i];

        // Rickshaw cost
        int rickshawCost = 0;

        for (int i = 0; i < n; i++) {
            rickshawCost += min(rick[i] * c1, c2);
        }

        rickshawCost = min(rickshawCost, c3);

        // Cab cost
        int cabCost = 0;

        for (int i = 0; i < m; i++) {
            cabCost += min(cab[i] * c1, c2);
        }

        cabCost = min(cabCost, c3);

        // Final cost
        int result = min(rickshawCost + cabCost, c4);

        cout << result << "\n";
    }

    return 0;
} vt fv