// https://www.codechef.com/problems/BROKENPHONE

// 03-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int X, Y;
	    cin >> X >> Y;
	    
	    if (X == Y) {
	        cout << "ANY" << endl;
	    } else {
	        cout << (X < Y ? "REPAIR" : "NEW PHONE") << endl;
	    }
	}
}
