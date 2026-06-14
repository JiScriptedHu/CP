// https://codeforces.com/contest/2203/problem/A
// 14-06-2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        int height = (d / m) + 1;
        int tower = (n + height - 1) / height;

        cout << tower << endl;
    }
}