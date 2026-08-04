// https://www.codechef.com/problems/EZSPEAK

// 04-08-2026
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while (T--) {
	    int N;
	    string S;
	    cin >> N >> S;
	    
	    if (N < 4) {
	        cout << "YES" << endl;
	        continue;
	    }
	    
	    int count = 0;
	    for (int i = 0; i < N; i++) {
	        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
	            count = 0;
	        } else {
	            count++;
	        }
	        
	        if (count >= 4) break;
	    }
	    
	    cout << (count < 4 ? "YES" : "NO") << endl;
	}
}
