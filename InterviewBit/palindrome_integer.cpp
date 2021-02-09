int Solution::isPalindrome(int A) {
    int temp = 0;
    int n = A;
    
    while(n > 0){
        int x = n%10;
        temp = temp * 10 + x;
        n = n/10;
    }
    
    if(temp == A)
        return 1;
    else
        return 0;
}
