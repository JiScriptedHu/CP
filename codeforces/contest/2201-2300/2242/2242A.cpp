// https://codeforces.com/contest/2242/problem/A

// 06-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int two = 0;
        int three = 0;
        bool flag = false;
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];

            if (a[i] >= 3) {
                three++;
            } else if (a[i] >= 2) {
                two++;
            }

            if (two == 2 || three == 1) {
                flag = true;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}