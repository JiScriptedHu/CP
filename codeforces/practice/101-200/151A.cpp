// https://codeforces.com/contest/151/problem/A

// 27-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinkToasts = (k * l) / nl;
    int limeToasts = c * d;
    int saltToasts = p / np;

    cout << min({drinkToasts, limeToasts, saltToasts}) / n << endl;

    return 0;
}