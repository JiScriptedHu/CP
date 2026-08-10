// https://codeforces.com/contest/1907/problem/A

// 10-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s[1] - '0';

        for (int i = 1; i < 9; i++) {
            if (i != n) {
                cout << s[0] << i << endl;
            }
        }

        for (char i = 'a'; i < 'i'; i++) {
            if (i != s[0]) {
                cout << i << s[1] << endl;
            }
        }
    }

    return 0;
}