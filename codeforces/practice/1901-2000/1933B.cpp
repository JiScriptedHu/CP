// https://codeforces.com/contest/1933/problem/B

// 09-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        bool hasRem1 = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;

            if (x % 3 == 1) {
                hasRem1 = true;
            }
        }

        int rem = sum % 3;

        if (rem == 0) {
            cout << 0 << endl;
        } 
        else if (rem == 2) {
            cout << 1 << endl;
        } 
        else {
            if (hasRem1) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }

    return 0;
}