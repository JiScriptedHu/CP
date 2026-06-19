// https://codeforces.com/contest/2156/problem/A

// 19-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int hao = 0;

        while (n > 2) {
            hao += n / 3;
            n = (n / 3) + (n % 3);
        }

        cout << hao << endl;
    }
}