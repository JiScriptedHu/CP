// https://codeforces.com/contest/2126/problem/A

// 24-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int mn = INT_MAX;

        while (n > 0) {
            mn = min(mn, (n % 10));
            n /= 10;
        }

        cout << mn << endl;
    }
}