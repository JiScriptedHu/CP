// https://codeforces.com/contest/46/problem/A

// 31-07-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pos = 1;
    int gap = 1;

    for (int i = 1; i < n; i++) {
        pos += gap++;
        cout << ((pos - 1) % n + 1) << " ";
    }

    return 0;
}