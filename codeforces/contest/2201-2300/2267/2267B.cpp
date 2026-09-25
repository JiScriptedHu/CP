// https://codeforces.com/contest/2267/problem/B

// 25-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(101, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x]++;
        }

        vector<int> s(n);
        int pos = 0;
        bool changed = true;

        while (changed) {
            changed = false;

            for (int i = 100; i > 0; i--) {
                if (a[i] > 0) {
                    s[pos++] = i;
                    a[i]--;
                    changed = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}