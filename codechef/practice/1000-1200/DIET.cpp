// https://www.codechef.com/problems/DIET

// 19-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    
	    int store = 0;
	    int day = 0;
	    bool flag = true;
	    for (int i = 0; i < n; i++) {
	        if (a[i] + store >= k) {
	            store += a[i] - k;
	        } else {
	            flag = false;
	            day = i + 1;
	            break;
	        }
	    }
	    
	    if (flag) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << " " << day << endl;
	    }
	}
	
	return 0;
}
