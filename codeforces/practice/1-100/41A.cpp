// https://codeforces.com/contest/41/problem/A

// 19-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}