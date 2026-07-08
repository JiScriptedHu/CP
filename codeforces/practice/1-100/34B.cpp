// https://codeforces.com/contest/34/problem/B

// 08-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int sum = 0;

    int i = 0;
    while (m) {
        if (a[i] < 0) {
            sum -= a[i];
            m--;
        } else {
            break;
        }
        i++;
    }

    cout << sum << endl;
    return 0;
}