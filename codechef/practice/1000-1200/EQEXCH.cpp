// https://www.codechef.com/problems/EQEXCH

// 24-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int sum = 0;
        int mn = 0, mx = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            sum += x;
            mn = min(mn, sum);
            mx = max(mx, sum);
        }
        
        cout << (mx - mn <= k ? "YES" : "NO") << endl;
    }
}
