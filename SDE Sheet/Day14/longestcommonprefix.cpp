class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        
        if(strs.size()==0)return ans;
        if(strs.size()==1)return strs[0];  // Just for last testcase
        
        int ind = 0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(ind >= strs[j].length() || strs[0][i]!=strs[j][i])
                    return ans;
            }
            ans+=strs[0][i];
            ind++;
         }   
        
        return ans;
    }
};