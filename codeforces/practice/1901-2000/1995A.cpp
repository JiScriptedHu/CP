// https://codeforces.com/contest/1995/problem/A

// 23-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == 0) {
            cout << 0 << endl;
            continue;
        }
        
        int dgnl = 1;
        k -= n;

        int i = 1;
        while (k > 0) {
            dgnl++;
            k -= n - i;

            if (k > 0) {
                dgnl++;
                k -= n - i;
                i++;
            }
        }

        cout << dgnl << endl;
    }
}