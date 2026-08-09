// https://www.codechef.com/problems/CHSERVE

// 09-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int p, q, k;
	    cin >> p >> q >> k;
	    
	    int changes = (p + q) / k;
	    
	    if (changes % 2 == 0) {
	        cout << "CHEF" << endl;
	    } else {
	        cout << "COOK" << endl;
	    }
	}
}
