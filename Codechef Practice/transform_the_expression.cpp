#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        stack<char> st;
        string str;
        cin>>str;
        int n = str.length();
        string ans = "";
        for(int i = 0; i<n; i++){
            if(str[i]>= 'a' && str[i] <= 'z'){
                ans += str[i];
            }else if(str[i] == '('){
                st.push(str[i]);
            }else if(str[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    char z = st.top();
                    st.pop();
                    ans += z;
                }
                if(st.top() == '(')
                    st.pop();
            }else{
                st.push(str[i]);
            }
        }
        while(!st.empty()){
            char c = st.top();
            st.pop();
            ans += c;
        }
        cout<<ans<<endl;
    }
    return 0;
}