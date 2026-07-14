// https://codeforces.com/contest/2244/problem/A

// 14-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int mx =  INT_MIN;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                count++;
            } else {
                mx = max(mx, count);
                count = 0;
            }
        }

        mx = max(mx, count);

        if (mx > 0) {
            cout << (mx + 1) / 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}