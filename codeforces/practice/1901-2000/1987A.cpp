// https://codeforces.com/contest/1987/problem/A

// 15-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        cout << (n * k) - k + 1 << endl;
    }

    return 0;
}