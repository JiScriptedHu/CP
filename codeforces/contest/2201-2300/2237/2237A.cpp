// https://codeforces.com/contest/2237/problem/A

// 18-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                a[i + 1] = a[i];
            }

            sum += a[i];
        }

        cout << sum + a[n - 1] << endl;
    }
}