// https://codeforces.com/contest/12/problem/A

// 17-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    bool flag = true;
    if (v[0][0] != v[2][2] || v[0][2] != v[2][0]) {
        flag = false;
    }
    if (v[0][1] != v[2][1] || v[1][0] != v[1][2]) {
        flag = false;
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}