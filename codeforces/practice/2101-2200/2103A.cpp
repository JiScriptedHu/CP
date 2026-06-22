// https://codeforces.com/contest/2103/problem/A

// 22-06-2026
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

        sort(a.begin(), a.end());

        int count = 0;
        for (int i = 1; i < n; i++) {
            if (a.at(i) == a.at(i - 1)) {
                count++;
            }
        }

        cout << n - count << endl;
    }
}