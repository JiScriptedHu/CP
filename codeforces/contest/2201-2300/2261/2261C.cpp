// https://codeforces.com/contest/2261/problem/C

// 17-10-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if ((odd == 1 && even == 1) || (odd == 3 && even == 0)) {
            cout << "Larpity" << '\n';
        } else {
            cout << "Moggity" << '\n';
        }
    }
}