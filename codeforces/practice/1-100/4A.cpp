// https://codeforces.com/contest/4/problem/A

// 17-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w % 2 == 0 && w / 2 > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}