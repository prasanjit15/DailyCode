class Solution {
public:
    string countAndSay(int n) {
       string s="1";
        if(n==1)
            return s;
        s+='1';
        if(n==2)
            return s;
        n-=2;
        while(n--)
        {   int i=0;
            string res="";
           while(i<s.size())
           {   
               int c=1;
               while(s[i]==s[i+1])
               {   c++;
                   i++;
               }
               string d=to_string(c);
               res+=d;
               res+=s[i];
               i++;
           }
        s=res;
        }
        return s;
    }
};