// https://codeforces.com/contest/2037/problem/A

// 27-06-2026
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

        sort(a.begin(), a.end());

        int score = 0;
        for (int i = 0; i < n - 1; ) {
            if (a[i] == a[i + 1]) {
                score++;
                i += 2;
            } else {
                i += 1;
            }
        }

        cout << score << endl;
    }
}