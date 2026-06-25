// https://codeforces.com/contest/2169/problem/A

// 25-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a;
        cin >> n >> a;

        int less = 0;
        int more = 0;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];

            if (v[i] > a) more++;
            else if (v[i] < a) less++;
        }

        if (less < more) {
            cout << a + 1 << endl;
        } else {
            cout << a - 1 << endl;
        }
    }
}