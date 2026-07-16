// https://codeforces.com/contest/2245/problem/A

// 16-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (n < k * 2) {
            cout << -1 << endl;
            continue;
        }

        int count = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'L') {
                s[i] = 'R';
                count++;
            }

            if (s[n - 1 - i] == 'R') {
                s[n - 1 - i] = 'L';
                count++;
            }
        }

        cout << count << endl;
    }
}