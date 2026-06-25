// https://codeforces.com/contest/2183/problem/A

// 25-06-2026
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
            cin >> a.at(i);
        }

        if (a.at(0) == 1 or a.at(n - 1) == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
}