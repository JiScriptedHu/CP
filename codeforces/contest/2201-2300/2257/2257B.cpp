// https://codeforces.com/contest/2257/problem/B

// 17-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        long long Da = a[0] + (n - 1);
        long long Db = b[0] + (m - 1);

        cout << (Da < Db ? 2 : 1) << endl;
    }
}