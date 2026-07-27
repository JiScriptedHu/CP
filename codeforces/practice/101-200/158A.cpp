// https://codeforces.com/contest/158/problem/A

// 27-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int minScore;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i + 1 == k) {
            minScore = a[i];
        }
    }

    sort(a.begin(), a.end());

    int player = n;
    for (int i = 0; i < n; i++) {
        if (a[i] < minScore || a[i] < 1) {
            player--;
        }
    }

    cout << player << endl;

    return 0;
}