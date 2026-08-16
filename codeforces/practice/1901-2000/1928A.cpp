// https://codeforces.com/contest/1928/problem/A

// 16-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        bool ok = false;

        if (a % 2 == 0 && a != 2*b) ok = true;

        if (b % 2 == 0 && b != 2*a) ok = true;
        
        cout << (ok ? "Yes" : "No") << endl;
    }

    return 0;
}