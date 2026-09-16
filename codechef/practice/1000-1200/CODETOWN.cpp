// https://www.codechef.com/problems/CODETOWN

// 16-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    string s;
	    cin >> s;
	    
	    bool flag = true;
	    for (int i = 0; i < 8; i++) {
	        if (i == 1 || i == 3 || i == 5) {
	            if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') {
	                flag = false;
	            }
	        }
	        
	        else {
	            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
	                flag = false;
	            }
	        }
	    }
	    
	    cout << (flag ? "YES" : "NO") << endl;
	}
}
