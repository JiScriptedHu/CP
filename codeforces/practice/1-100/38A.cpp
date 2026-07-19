// https://codeforces.com/contest/38/problem/A

// 19-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> d[i];

    cin >> a >> b;
    
    int years = 0;
    for (int i = a - 1; i < b - 1; i++) years += d[i];
    cout << years << endl;

    return 0;
}