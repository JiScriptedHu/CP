// https://codeforces.com/contest/1923/problem/A

// 16-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (first == -1) first = i;
                last = i;
            }
        }

        int ans = 0;
        for (int i = first; i <= last; i++) {
            if (a[i] == 0) ans++;
        }

        cout << ans << endl;
    }

    return 0;
}