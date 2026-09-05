// https://codeforces.com/contest/1916/problem/A

// 05-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        long long pro = 1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pro *= x;
        }

        if (2023 % pro != 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        long long rem = 2023 / pro;
        cout << rem << " ";
        for (int i = 1; i < k; i++) cout << 1 << " ";

        cout << endl;
    }

    return 0;
}