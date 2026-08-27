// https://www.codechef.com/problems/MAKEMONEY

// 27-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x, c;
	    cin >> n >> x >> c;
	    
	    int sum = 0;
	    for (int i = 0; i < n; i++) {
	        int y;
	        cin >> y;
	        
	        if (y < x - c) {
	            sum += x - c;
	        } else {
	            sum += y;
	        }
	    }
	    
	    cout << sum << endl;
	}
}