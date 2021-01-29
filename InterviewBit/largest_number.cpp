int func(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    
    return ab.compare(ba) > 0? 1 : 0;
}


string Solution::largestNumber(const vector<int> &A) {
    string ans = "";
    vector<string> str;
    int count = 0;
    
    for(int i = 0; i<A.size(); i++){
        if(A[i] == 0)
            count++;
        
        str.push_back(to_string(A[i]));
    }
    
    if(count == A.size())
        return "0";
    
    sort(str.begin(), str.end(), func);
    
    for(int j = 0; j<str.size(); j++)
        ans+=str[j];
        
    return ans;
}
