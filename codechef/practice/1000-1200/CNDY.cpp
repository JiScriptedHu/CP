// https://www.codechef.com/problems/CNDY

// 20-09-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    vector<long long> a(2 * n);
	    for (int i = 0; i < 2 * n; i++) cin >> a[i];
	    
	    sort(a.begin(), a.end());
	    
	    bool flag = true;
	    for (int i = 2; i < 2 * n; i++) {
	        if (a[i] == a[i - 2]) {
	            flag = false;
	            break;
	        }
	    }
	    
	    cout << (flag ? "YES" : "NO") << endl;
	}
}
