// https://codeforces.com/contest/2164/problem/A

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a.at(i);
        }

        cin >> x;

        sort(a.begin(), a.end());
        
        if (x >= a.at(0) && x <= a.at(n - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}