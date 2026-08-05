// https://codeforces.com/contest/141/problem/A

// 05-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    vector<int> cnt1(26, 0), cnt2(26, 0);

    for (char ch : a) cnt1[ch - 'A']++;
    for (char ch : b) cnt1[ch - 'A']++;
    for (char ch : c) cnt2[ch - 'A']++;

    if (cnt1 == cnt2) cout << "YES";
    else cout << "NO";

    return 0;
}