// https://codeforces.com/contest/129/problem/A

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

    int count = 0;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        int x = sum - a[i];

        if (x % 2 == 0) {
            count++;
        }
    }

    cout << count << endl;
}