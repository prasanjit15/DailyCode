string Solution::solve(string A) {
    
    int n =A.size();
    int swp = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1])
        {
            swp = i;
            break;
        }
    }
    
   // cout<<swp<<" ";
    if(swp==-1)
    return "-1";
    int i = n-1;
    while(i>swp){
        if(A[i]>A[swp])
        break;
        i--;
    }
    
   // cout<<i<<" ";
    swap(A[i],A[swp]);
    
    reverse(A.begin()+swp+1,A.end());
    return A;
}