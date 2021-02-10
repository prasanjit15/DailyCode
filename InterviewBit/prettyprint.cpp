vector<vector<int> > Solution::prettyPrint(int A) {
    int n = 2 * A - 1;
    vector<vector<int>>v(n,vector(n,A));
    for(int i = 0; i<A; i++){
        for(int j = i; j<n - i; j++){
            v[i][j] = A-i;
            v[j][i] = A - i;
            v[n - i - 1][j] = A - i;
            v[n-j-1][n-i-1] = A- i;
        }
    }
    return v;
}
