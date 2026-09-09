// https://codeforces.com/contest/1972/problem/A

// 09-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int ans = n;
        int i = 0;
        int j = 0;
        while (i < n && j < n) {
            if (a[i] <= b[j]) {
                ans--;
                i++;
                j++;
            } else j++;
        }

        cout << ans << endl;
    }

    return 0;
}