// https://www.codechef.com/problems/SNDMAX

// 24-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    long long sl = a + b + c - max({a, b, c}) - min({a, b, c});
	    
	    cout << sl << endl;
	}
}
