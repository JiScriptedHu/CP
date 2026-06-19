// https://codeforces.com/contest/2232/problem/A

// 11-06-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int i = 0;
        int j = n - 1;
        int count = 0;

        while (i < j) {
            if (a[i] != a[j]) {
                count++;
            }
            i++;
            j--;
        }
        
        cout << count << endl;
    }
}