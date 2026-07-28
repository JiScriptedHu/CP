// https://codeforces.com/contest/172/problem/A

// 28-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int digits = 0;

    for (int i = 0; i < s[0].length(); i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j][i] != s[j + 1][i]) {
                cout << digits << endl;
                return 0;
            }
        }
        digits++;
    }

    cout << digits << endl;
    return 0;
}