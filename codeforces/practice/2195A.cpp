// https://codeforces.com/contest/2195/problem/A
// mathnumber theory, 800

// 17-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool flag = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 67) flag = true;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}