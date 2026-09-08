// https://www.codechef.com/problems/BLNDOR

// 08-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    int two = 0;
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        
	        if (a[i] == 2) two++;
	    }
	    
	    cout << (two % 8 == 0 ? "YES" : "NO") << endl;
	}
}
