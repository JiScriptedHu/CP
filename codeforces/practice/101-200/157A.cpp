// https://codeforces.com/contest/157/problem/A

// 03-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> row(n, 0), col(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;

            row[i] += x;
            col[j] += x;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] < col[j]) count++;
        }
    }

    cout << count << endl;
    return 0;
}