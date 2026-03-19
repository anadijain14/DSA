#include <iostream>
using namespace std;

string removeConsecutiveDuplicates(string s) {
    string result = "";
    
    // First character is always included
    result += s[0];
    
    for (int i = 1; i < s.length(); i++) {
        // Add only if different from previous character
        if (s[i] != s[i - 1]) {
            result += s[i];
        }
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;

    cout << removeConsecutiveDuplicates(s);

    return 0;
}