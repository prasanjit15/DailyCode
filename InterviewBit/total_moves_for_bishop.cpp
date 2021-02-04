int Solution::solve(int A, int B) {
    int i = min(A - 1, B - 1);
    int j = min(8 - A, 8 - B);
    int k = min(8 - A, B - 1);
    int l = min(A - 1, 8 - B);
    
    return i + j + k + l;
}
