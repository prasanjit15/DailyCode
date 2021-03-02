int Solution::isPalindrome(string A) {
    string s = "";
    for(int i = 0; i<A.length(); i++){
        if(A[i] <= 122 && A[i]>= 97) || (A[i] <= 90 && A[i]>= 65){
            s+=char(tolower(A[i]));
        }else if(A[i] <= 57 && A[i] >= 48){
            s += A[i];
        }
    }
    
    for(int i = 0; i<s.length()/2; i++){
        if(s[i] != s[s.length() - i])
            return 0;
    }
    return 1;
}
