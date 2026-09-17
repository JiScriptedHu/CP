// https://www.codechef.com/problems/HEADBOB

// 17-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    string s;
	    cin >> n >> s;
	    
	    for (int i = 0; i < n; i++) {
	        if (s[i] == 'Y') {
	            cout << "NOT INDIAN" << endl;
	            break;
	        }
	        
	        else if (s[i] == 'I') {
	            cout << "INDIAN" << endl;
	            break;
	        }
	        
	        else if (s[i] == 'N' && i == n - 1) {
	            cout << "NOT SURE" << endl;
	            break;
	        }
	    }
	}
	
	return 0;
}
