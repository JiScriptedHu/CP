// https://codeforces.com/contest/2117/problem/B

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd = 1;
        int even;
        if (n % 2 == 0) {
            even = n;
        } else {
            even = n - 1;
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            if (!(odd > n)) {
                cout << odd << " ";
                odd += 2;
            } else {
                cout << even << " ";
                even -= 2;
            }
        }

        cout << endl;
    }
}