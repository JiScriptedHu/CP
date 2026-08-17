// https://www.codechef.com/problems/EVENTUAL

// 17-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    string s;
	    cin >> n >> s;
	    
	    vector<int> a(26, 0);
	    for (int i = 0; i < n; i++) {
	        int x = s[i] - 'a';
	        a[x]++;
	    }
	    
	    bool flag = true;
	    for (int i = 0; i < 26; i++) {
	        if (a[i] % 2 != 0) flag = false;
	    }
	    
	    cout << (flag ? "YES" : "NO") << endl;
	}
}
