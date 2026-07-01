// https://codeforces.com/contest/2014/problem/A

// 01-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int robin = 0;
        int help = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] >= k) {
                robin += a[i];
                a[i] = 0;
            } else if (a[i] == 0 && robin > 0) {
                a[i]++;
                help++;
                robin--;
            }
        }

        cout << help << endl;
    }
}