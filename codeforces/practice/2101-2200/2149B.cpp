// https://codeforces.com/contest/2149/problem/B

// 26-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<int> b(n / 2);
        for (int i = 0; i < n / 2; i++) {
            b[i] = a[(2 * i) + 1] - a[2 * i];
        }

        sort(b.begin(), b.end());

        cout << *(b.end() - 1) << endl;
    }
}