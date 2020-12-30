#include<bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    char t;
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
            continue;
        }
        
        if(st.empty())
            return false;
        
        if(s[i] == ')'){
            t = st.top();
            st.pop();
            if(t == '{' || t == '[')
                return false;
        }
        
        if(s[i] == '}'){
            t = st.top();
            st.pop();
            if(t == '(' || t == '[')
                return false;
        }
        
        if(s[i] == ']'){
            t = st.top();
            st.pop();
            if(t == '{' || t == '(')
                return false;
        }
    }   
    return (st.empty());
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    if(isValid(s))
        cout<<"Balanced!!"<<endl;
    else
        cout<<"Not Balanced!!"<<endl;
    
    return 0;
}