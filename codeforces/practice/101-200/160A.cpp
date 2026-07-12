// https://codeforces.com/contest/160/problem/A

// 12-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    int subset = 0;
    int count = 0;

    vector<int> b(n);
    for (int i = n - 1; i >= 0; i--) {
        subset += a[i];
        sum -= a[i];
        count++;

        if (subset > sum) {
            break;
        }
    }

    cout << count << endl;
}