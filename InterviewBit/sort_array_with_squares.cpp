vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> res(n, 0);
    int i = 0;
    int j = n-1;
    int k = n - 1;
    while(i<=j){
        if(abs(A[i]) > abs(A[j])){
            res[k] = A[i] * A[i];
            k--;
            i++;
        }else{
            res[k] = A[j] * A[j];
            k--;
            j--;
        }
    }
    return res;
    
}
