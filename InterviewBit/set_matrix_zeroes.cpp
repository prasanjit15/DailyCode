void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    bool ch = false;
    int row = A.size();
    int col = A[0].size();
    
    if(row == 0 || col == 0)
        return;
    
    for(int i = 0; i<row; i++){
        if(A[i][0] == 0) ch = true;
        for(int j = 1; j<col; j++){
            if(A[i][j] == 0){
                A[i][0] = A[j][0] = 0;
            }
        }
    }
    
    for(int i = row - 1; i>=0 ; i--){
        for(int j = col - 1; j >= 0; j--){
            if(A[i][0] == 0 || A[j][0] == 0)
                A[i][j] = 0;
        }
        if(ch == true)
            A[i][0] = 0;
    }
}
