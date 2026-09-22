// https://codeforces.com/contest/1991/problem/A

// 22-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> odd(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if ((i + 1) % 2 == 1) odd[i] = a[i];
        }

        sort(odd.begin(), odd.end());

        cout << odd[n - 1] << endl;
    }

    return 0;
}