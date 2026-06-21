// https://codeforces.com/contest/2162/problem/A

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int larg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > larg) larg = x;
        }

        cout << larg << endl;
    }
}