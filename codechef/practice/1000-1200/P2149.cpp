// https://www.codechef.com/problems/P2149

// 31-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, x;
	    cin >> a >> b >> x;
	    
	    if ((x * x) >= (a * b)) cout << 0 << endl;
	    else if ((x * x) >= (a * 1)) cout << 1 << endl;
	    else if ((x * x) >= (b * 1)) cout << 1 << endl;
	    else cout << 2 << endl;
	}
}
