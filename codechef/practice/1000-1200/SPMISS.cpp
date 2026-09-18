// https://www.codechef.com/problems/SPMISS

// 18-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, c;
	    cin >> n >> c;
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    
	    string s;
	    cin >> s;
	    
	    int NmlCoins = 0;
	    int SplCoins = 0;
	    for (int i = 0; i < n; i++) {
	        if (s[i] == '0') {
	            NmlCoins += a[i];
	        } else {
	            SplCoins += a[i];
	        }
	    }
	    
	    cout << (NmlCoins >= c && SplCoins > c ? NmlCoins + SplCoins - c : NmlCoins) << endl;
	}
	
	return 0;
}
