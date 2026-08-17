// https://codeforces.com/contest/1931/problem/B

// 17-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        long long avg = sum / n;

        long long extra = 0;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            extra += a[i] - avg;

            if (extra < 0) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}