// https://codeforces.com/contest/2238/problem/A

// 28-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int time = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
                time += c;
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] >= b[i]) {
                time += a[i] - b[i];
            }
            else {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << time << endl;
        } else {
            cout << -1 << endl;
        }
    }
}