// https://www.codechef.com/problems/ADACRA

// 05-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    string s;
	    cin >> s;
	    
	    int n = s.length();
	    
	    int u = 0;
	    int d = 0;
	    char cur = 'X';
	    
	    for (int i = 0; i < n; i++) {
	        if (s[i] == 'U' && s[i] != cur) {
	            u++;
	            cur = 'U';
	        } else if (s[i] == 'D' && s[i] != cur) {
	            d++;
	            cur = 'D';
	        }
	    }
	    
	    cout << min(u, d) << endl;
	}
}
