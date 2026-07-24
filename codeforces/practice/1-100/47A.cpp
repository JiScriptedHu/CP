// https://codeforces.com/contest/47/problem/A

// 24-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = false;
    for (int i = 1; i * (i + 1) / 2 <= n; i++) {
        if (i * (i + 1) / 2 == n) {
            flag = true;
            break;
        }
    }
    
    cout << (flag ? "YES" : "NO");

    return 0;
}