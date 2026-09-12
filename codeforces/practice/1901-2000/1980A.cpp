// https://codeforces.com/contest/1980/problem/A

// 12-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string s;
        cin >> n >> m >> s;

        vector<int> a(7, m);
        for (int i = 0; i < n; i++) {
            int x = s[i] - 'A';
            a[x]--;
        }

        int required = 0;
        for (int i = 0; i < 7; i++) {
            if (a[i] > 0) {
                required += a[i];
            }
        }

        cout << required << endl;
    }

    return 0;
}