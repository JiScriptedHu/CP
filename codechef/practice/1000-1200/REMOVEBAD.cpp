// https://www.codechef.com/problems/REMOVEBAD

// 06-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> d(n + 1, 0);
	    for (int i = 0; i < n; i++) {
	        int x;
	        cin >> x;
	        d[x]++;
	    }
	    
	    sort(d.begin(), d.end());
	    
	    cout << n - d[n] << endl;
	}
}
