// https://codeforces.com/contest/2218/problem/C

// 13-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        n *= 3;

        int a[n];
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }

        int i = 0;
        while (i < n) {
            cout << a[i++] << " " << a[--n] << " " << a[--n] << " ";
        }

        cout << endl;
    }
}