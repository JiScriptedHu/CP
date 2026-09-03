// https://codeforces.com/contest/1986/problem/A

// 03-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];

        sort(x, x + 3);

        cout << (x[2] - x[0]) << endl;
    }

    return 0;
}