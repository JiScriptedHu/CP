// https://codeforces.com/contest/11/problem/A

// 07-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;

    for (int i = 1; i < n; i++) {
        if (!(a[i] > a[i - 1])) {
            int x = a[i - 1] - a[i];
            int y = (x / d) + 1;
            count += y;
            a[i] += y * d;
        }
    }

    cout << count << endl;
    return 0;
}