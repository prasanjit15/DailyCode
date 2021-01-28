int Solution::solve(vector<int> &A, int B) {
    int res = 0;
    int n = A.size();
    for(int i = 0; i<B; i++){
        res += A[i];
    }
    
    int sum = res;
    
    for(int j = 0; j<B; j++){
        sum -= A[B - 1 - j];
        sum += A[n - 1 - j];
        res = max(res, sum);
    }
    
    return res;
}
