// https://codeforces.com/contest/2091/problem/B

// 04-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        int teams = 0;
        int members = 0;

        for (int i = 0; i < n; i++) {
            members++;
            if (a[i] * members >= x) {
                teams++;
                members = 0;
            }
        }

        cout << teams << "\n";
    }
}