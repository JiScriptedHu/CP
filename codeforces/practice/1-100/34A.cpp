// https://codeforces.com/contest/34/problem/A

// 03-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int diff = INT_MAX;
    int pos = 0;

    for (int i = 0; i < n; i++) {
        int cur = abs(a[i] - a[(i + 1) % n]);

        if (cur < diff) {
            diff = cur;
            pos = i;
        }
    }

    cout << pos + 1 << " " << (pos + 1) % n + 1 << endl;
    return 0;
}