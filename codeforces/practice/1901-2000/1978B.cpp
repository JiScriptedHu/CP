// https://codeforces.com/contest/1978/problem/B

// 19-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long k = b - a;

        if (k < 0) k = 0;
        if (k > n) k = n;

        long long ans = (n - k) * a;

        ans += k * (2 * b - k + 1) / 2;

        cout << ans << endl;
    }

    return 0;
}