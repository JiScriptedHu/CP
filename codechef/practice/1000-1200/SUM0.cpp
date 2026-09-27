// https://www.codechef.com/problems/SUM0

// 27-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n == 1) {
	        cout << -1 << endl;
	        continue;
	    }
	    
	    if (n % 2 == 0) {
	        for (int i = 0; i < n; i++) {
	            cout << (i < n / 2 ? -1 : 1) << " ";
	        }
	        
	        cout << endl;
	    } else {
	        cout << -2 << " " << 1 << " " << 1 << " ";
	        
	        n -= 3;
	        for (int i = 0; i < n; i++) {
	            cout << (i < n / 2 ? -1 : 1) << " ";
	        }
	        
	        cout << endl;
	    }
	}
}
