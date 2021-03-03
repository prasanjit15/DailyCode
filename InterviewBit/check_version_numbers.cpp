int Solution::compareVersion(string A, string B) {
    int i = 0, j = 0, len1 = A.size(), len2 = B.size();
    while( i<len1 || j<len2 ) {
        unsigned long num1 = 0, num2 = 0;
        while(i<len1 && A[i] != '.')
            num1 = num1*10+(A[i++]-'0');
        while(j<len2 && B[j] != '.')
            num2 = num2*10+(B[j++]-'0');
        if(num1 != num2)    return num1 < num2 ? -1 : 1;
        i++, j++;
    }
    return 0;
}