// https://www.codechef.com/problems/FODCHAIN

// 12-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    long long e, k;
	    cin >> e >> k;
	    
	    long long lvl = 1;
	    
	    while (e > 0) {
	        e /= k;
	        
	        if (e > 0) lvl++;
	    }
	    
	    cout << lvl << endl;
	}
}
