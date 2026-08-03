// https://www.codechef.com/problems/ADVANCE

// 03-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int X, Y;
	    cin >> X >> Y;
	    
	    cout << (Y <= X + 200 && Y >= X ? "YES" : "NO") << endl;
	}
}
