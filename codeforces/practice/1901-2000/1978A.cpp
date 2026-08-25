// https://codeforces.com/contest/1978/problem/A

// 25-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n - 1);
        for (int i = 0; i < n - 1; i++) cin >> a[i];

        long long last;
        cin >> last;

        sort(a.begin(), a.end());

        cout << a[n - 2] + last << endl;
    }

    return 0;
}