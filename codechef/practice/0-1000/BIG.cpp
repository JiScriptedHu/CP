// https://www.codechef.com/problems/BIG

// 10-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    
	    int mx = 0;
	    
	    for (int i = 0; i < n; i++) {
	        if (a[i] > mx) {
	            cout << 1 << " ";
	        } else {
	            cout << 0 << " ";
	        }
	        
	        mx = max(mx, a[i]);
	    }
	    
	    cout << endl;
	}

}
