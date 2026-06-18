// https://codeforces.com/contest/2193/problem/B
// greedy, 800

// 17-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int y = -1;
        int value = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] != n - i) {
                y = i;
                value = n - i;
                break;
            }
        }

        if (y != -1) {
            int pos = -1;

            for (int i = y; i < n; i++) {
                if (a[i] == value) {
                    pos = i;
                    break;
                }
            }

            if (pos != -1) {
                reverse(a.begin() + y, a.begin() + pos + 1);
            }
        }

        for (int x : a) {
            cout << x << " ";
        }

        cout << endl;
    }
}