// https://www.codechef.com/problems/ATTENDU

// 05-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    string b;
	    cin >> n >> b;
	    
	    int absent = 0;
	    for (int i = 0; i < n; i++) if (b[i] == '0') absent++;
	    
	    cout << (absent > 30 ? "NO" : "YES") << endl;
	}
}
