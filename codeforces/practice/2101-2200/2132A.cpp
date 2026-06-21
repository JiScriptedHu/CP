// https://codeforces.com/contest/2132/problem/A

// 21-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c;

        for (int i = 0; i < m; i++) {
            if (c[i] == 'D') {
                a.push_back(b[i]);
            } else {
                string x = "";
                x.push_back(b[i]);
                x.push_back(a[0]);
                a.replace(0, 1, x);
            }
        }
        
        cout << a << endl;
    }
}