int Solution::titleToNumber(string A) {
    int ans = 0;
    int n = A.size();
    for(int i = n - 1; i >=0 ; i--){
        ans += (A[i] - 'A' + 1) * pow(26, n - i - 1);
    }
    
    return ans;
}
