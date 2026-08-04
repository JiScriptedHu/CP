// https://www.codechef.com/problems/AVGPROBLEM

// 04-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int A, B, C;
	    cin >> A >> B >> C;
	    
	    cout << (float(A + B) / float(2) > C ? "YES" : "NO") << endl;
	}
}
