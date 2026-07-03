// https://codeforces.com/contest/2032/problem/A

// 03-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int one = 0;
        int zero = 0;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];

            if (a[i] == 1) one++;
            else zero++;
        }

        sort(a.begin(), a.end());

        cout << (one % 2) << " " << min(one, zero) << endl;
    }
}