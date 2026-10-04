// https://codeforces.com/contest/1649/problem/A

// 04-10-2026
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

        int start = 0;
        int finish = n - 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == 1) {
                start = i;
            } else {
                break;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] == 1) {
                finish = i;
            } else {
                break;
            }
        }

        if (start > finish) cout << 0 << '\n';
        else cout << finish - start << '\n';
    }

    return 0;
}