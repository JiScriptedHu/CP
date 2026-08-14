// https://www.codechef.com/problems/ATM2

// 14-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        
	        if (x > k) {
	            cout << 0;
	        } else {
	            cout << 1;
	            k -= x;
	        }
	    }
	    
	    cout << endl;
	}
	
	return 0;
}
