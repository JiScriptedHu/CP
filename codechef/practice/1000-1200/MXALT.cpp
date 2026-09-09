// https://www.codechef.com/problems/MXALT

// 09-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<int> a(n);
	    long long sum = 0;
	    int half = (n + 1) / 2;
	    
	    for (int i = 0; i < n; i++) cin >> a[i];
	    
	    sort(a.begin(), a.end());
	    for (int i = 0; i < n; i++) {
	        if (i < n - half) sum -= a[i];
	        else sum += a[i];
	    }
	    
	    cout << sum << endl;
	}
}
