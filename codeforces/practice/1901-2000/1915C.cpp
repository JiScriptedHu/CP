// https://codeforces.com/contest/1915/problem/C

// 24-08-2026
#include <bits/stdc++.h>
using namespace std;

bool canSqre(long long x) {
    long long r = sqrt(x);
    return r * r == x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }

        cout << (canSqre(sum) ? "YES" : "NO") << endl;
    }

    return 0;
}