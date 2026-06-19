// https://codeforces.com/contest/2191/problem/A

// 17-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool flag = true;
        int prev = -1;
        int cur;
        for (int i = 0; i < n; i++) {
            cin >> cur;
            cur = cur % 2;
            if (prev == cur) flag = false;
            prev = cur;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}