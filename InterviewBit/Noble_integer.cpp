int Solution::solve(vector<int> &A) {
    int count = 0;
    int ans = -1;
    
    sort(A.begin(), A.end());
    for(int i = 0; i<A.size(); i++){
        if(A[i] == A[i+1])
            continue;
        
        if(A[i] == A.size() - i - 1){
            ans = 1;
            break;
        }
    }
    if(A[A.size() - 1] == 0)
        ans = 1;
    
    return ans;
}
