// https://codeforces.com/contest/2069/problem/A

// 28-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n);
        b = {0};
        for (int i = 1; i < n - 1; i++) {
            cin >> b[i];
        }

        bool flag = true;
        for (int i = 1; i < n - 1; i++) {
            if (b[i] == 0 && b[i - 1] == 1 && b[i + 1] == 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}