// https://codeforces.com/contest/1957/problem/A

// 07-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(101, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x]++;
        }

        int poly = 0;
        for (int i = 1; i < 101; i++) {
            if (a[i] > 2) poly += a[i] / 3;
        }

        cout << poly << endl;
    }

    return 0;
}