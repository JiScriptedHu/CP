// https://www.codechef.com/problems/ODDEVENBS

// 11-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int odd = 0;
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        
	        if (x == 1) odd++;
	    }
	    
	    cout << (n % 2 == odd % 2 ? "YES" : "NO") << endl;
	}

}
