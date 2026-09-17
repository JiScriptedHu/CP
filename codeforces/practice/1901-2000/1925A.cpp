// https://codeforces.com/contest/1925/problem/A

// 17-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string sub = "";
        for (int i = 0; i < k; i++) {
            sub += 'a' + i;
        }

        string s;
        for (int i = 0; i < n; i++) {
            s += sub;
        }
        cout << s << endl;
    }

    return 0;
}