#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};  // To store frequency of characters

    // Count frequency
    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    // Find character with maximum frequency
    int maxFreq = 0;
    char result;

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] > maxFreq) {
            maxFreq = freq[s[i]];
            result = s[i];
        }
    }

    cout << result;

    return 0;
}