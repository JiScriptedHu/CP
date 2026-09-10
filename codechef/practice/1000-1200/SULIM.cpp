// https://www.codechef.com/problems/SULIM

// 10-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n), b(n);
	    
	    for (int i = 0; i < n; i++) cin >> a[i];
	    for (int i = 0; i < n; i++) cin >> b[i];
	    
	    int ans = 0;
        
        for (int L = 0; L <= 100; L++) {
            int sum = 0;
            
            for (int i = 0; i < n; i++) {
                if (b[i] <= L && a[i] > 0) {
                    sum += a[i];
                }
            }
            
            ans = max(ans, sum - L);
        }
        
        cout << ans << endl;
	}
}
