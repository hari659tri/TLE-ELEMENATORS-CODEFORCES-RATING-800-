#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        string s;
        cin >> s;  // Input string

        if (s.length() == 1) {
            // If the string length is 1, no valid substring exists
            cout << -1 << endl;
        } else {
            // Otherwise, take the first two characters as the substring
            cout << s.substr(0, 2) << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
