// https://www.codechef.com/problems/DSCPPAS266

// 08-08-2026
/*

bool canReduce(int N, vector<int>& arr) {
    sort(arr.begin(), arr.end());
    
    bool flag = true;
    for (int i = 0; i < N - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            flag = false;
            break;
        }
    }
    
    if (flag) return 1;
    else return 0;
}

*/