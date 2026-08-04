// https://codeforces.com/contest/169/problem/A

// 04-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int h[2005];

    for (int i = 0; i < n; i++)
        cin >> h[i];

    sort(h, h + n);

    cout << max(0, h[b] - h[b - 1]);

    return 0;
}