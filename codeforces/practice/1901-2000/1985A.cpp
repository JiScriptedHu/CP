// https://codeforces.com/contest/1985/problem/A

// 21-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;

        cout << a << " " << b << endl;
    }

    return 0;
}