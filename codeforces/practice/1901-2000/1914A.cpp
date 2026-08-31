// https://codeforces.com/contest/1914/problem/A

// 31-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> a(27, 0);
        for (int i = 0; i < n; i++) {
            int x = s[i] - 'A';
            a[x + 1]++;
        }

        int complete = 0;
        for (int i = 1; i < 27; i++) {
            if (a[i] >= i) complete++;
        }

        cout << complete << endl;
    }

    return 0;
}