// https://codeforces.com/contest/2065/problem/A

// 29-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string W;
        cin >> W;

        int n = W.length();
        W.erase(n - 2, 2);
        
        cout << W + "i" << endl;
    }
}