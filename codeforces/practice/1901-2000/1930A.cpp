// https://codeforces.com/contest/1930/problem/A

// 29-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        long long sum = 0;
        for (int i = 0; i < 2* n;) {
            sum += a[i];
            i += 2;
        }

        cout << sum << endl;
    }

    return 0;
}