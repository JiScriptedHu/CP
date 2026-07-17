// https://codeforces.com/contest/22/problem/A

// 17-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (a[i] > a[0]) {
            cout << a[i] << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}