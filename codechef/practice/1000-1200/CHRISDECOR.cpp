// https://www.codechef.com/problems/CHRISDECOR

// 13-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, x, y;
	    cin >> n >> x >> y;
	    
	    int set = 0;
	    set += min(x, (y / 3));
	    set += (x - set) / 2;
	    
	    cout << (set < n ? "NO" : "YES") << endl;
	}
}
