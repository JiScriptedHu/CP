// https://codeforces.com/contest/2055/problem/A

// 21-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (abs(a - b) % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}