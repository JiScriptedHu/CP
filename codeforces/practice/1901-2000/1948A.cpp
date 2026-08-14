// https://codeforces.com/contest/1948/problem/A

// 14-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        string s = "";
        for (int i = 0; i < n / 2; i++) {
            char x = 'A' + i;
            s += x;
            s += x;
        }

        cout << s << endl;
    }

    return 0;
}