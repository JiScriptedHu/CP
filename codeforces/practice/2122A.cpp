// https://codeforces.com/contest/2122/problem/A
// constructive algorithms, greedy, 800

// 16-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (n == 1 || m == 1 || (n == 2 && m == 2)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}