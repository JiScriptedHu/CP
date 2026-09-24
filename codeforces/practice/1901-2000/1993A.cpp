// https://codeforces.com/contest/1993/problem/A

// 24-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ans(4, 0);

        for (int i = 0; i < 4 * n; i++) {
            if (s[i] == '?') continue;

            ans[s[i] - 'A']++;
        }

        cout << min(n, ans[0]) + min(n, ans[1]) + min(n, ans[2]) + min(n, ans[3]) << endl;
    }

    return 0;
}