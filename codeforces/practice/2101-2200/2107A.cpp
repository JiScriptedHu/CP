// https://codeforces.com/contest/2107/problem/A

// 02-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        
        if (mn == mx) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            if (a[i] == mx)
                cout << 2 << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
}