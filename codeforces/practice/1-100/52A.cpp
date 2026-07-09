// https://codeforces.com/contest/52/problem/A

// 09-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int mx = INT_MIN;
    int x = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            x++;
        } else {
            mx = max(x, mx);
            x = 1;
        }
    }

    mx = max(x, mx);
    
    cout << n - mx << endl;
    return 0;
}