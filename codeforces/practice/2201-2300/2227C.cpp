// https://codeforces.com/contest/2227/problem/C

// 11-06-2026
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

        int b[n];
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && a[i] % 3 != 0) {
                b[j++] = a[i];
            } 
        }

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0 && a[i] % 3 != 0) {
                b[j++] = a[i];
            } 
        }

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0 && a[i] % 3 == 0) {
                b[j++] = a[i];
            } 
        }

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && a[i] % 3 == 0) {
                b[j++] = a[i];
            } 
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }

        cout << endl;
    }
}