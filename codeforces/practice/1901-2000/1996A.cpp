// https://codeforces.com/contest/1996/problem/A

// 27-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << (n / 4) + ((n % 4) / 2) << endl;
    }

    return 0;
}