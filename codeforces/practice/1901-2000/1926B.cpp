// https://codeforces.com/contest/1926/problem/B

// 21-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> m(n);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            int sum = 0;
            for (int j = 0; j < n; j++) {
                if (s[j] == '1') sum++;
            }

            m[i] = sum;
        }

        sort(m.begin(), m.end());

        cout << (m[n - 1] == m[n - 2] ? "SQUARE" : "TRIANGLE") << endl;
    }

    return 0;
}