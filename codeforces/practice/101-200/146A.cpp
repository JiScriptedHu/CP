// https://codeforces.com/contest/146/problem/A

// 27-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int left = 0, right = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != '4' && s[i] != '7') {
            cout << "NO" << endl;
            return 0;
        }

        if (i < n / 2) {
            left += s[i] - '0';
        } else {
            right += s[i] - '0';
        }
    }

    cout << (left == right ? "YES" : "NO") << endl;
}