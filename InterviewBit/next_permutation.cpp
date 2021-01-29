vector<int> Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    int k;
    int j;
    
    for(k = n - 2; k>=0; k--){
        if(A[k] < A[k+1])
            break;
    }
    
    if(k<0)
        reverse(A.begin(), A.end());
    else{
        for(j = n-1; j>k; j--){
            if(A[j] > A[k])
                break;
        }
        swap(A[k], A[j]);
        reverse(A.begin() + k + 1, A.end());
    }
    return A;
}
