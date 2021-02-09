string Solution::convertToTitle(int n) {
    string ans = "";
    
    while(n >0){
        int x = n % 26;
        if(x == 0){
            ans = 'Z' + ans;
            n = n/26 - 1;
        }else{
            ans = char('A' + (x - 1)) + ans;
            n = n/26;
        }
    }
    return ans;
}
