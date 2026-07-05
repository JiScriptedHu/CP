// https://codeforces.com/contest/10/problem/A

// 05-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];

    long long powC = 0;

    for (int i = 0; i < 2 * n; i += 2) {
        powC += 1LL * (a[i + 1] - a[i]) * P1;
    }

    vector<int> b(n - 1);
    int j = 0;
    for (int i = 1; i < 2 * n - 2; i += 2) {
        b[j++] = a[i + 1] - a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int gap = b[i];

        if (gap <= T1) {
            powC += 1LL * gap * P1;
        }
        else if (gap <= T1 + T2) {
            powC += 1LL * T1 * P1;
            powC += 1LL * (gap - T1) * P2;
        }
        else {
            powC += 1LL * T1 * P1;
            powC += 1LL * T2 * P2;
            powC += 1LL * (gap - T1 - T2) * P3;
        }
    }

    cout << powC << endl;
    return 0;
}