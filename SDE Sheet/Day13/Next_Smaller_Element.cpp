#include<bits/stdc++.h>

using namespace std;

void check(vector<int> s){
    stack<int> st;

    st.push(s[0]);
    
    for(int i = 0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }

        while(!st.empty() && st.top()>s[i]){
            cout<<st.top()<<"---> "<<s[i]<<endl;
            st.pop();
        }

        st.push(s[i]);
    }

    while(!st.empty()){
        cout<<st.top()<<"---> "<<-1<<endl;
        st.pop();
    }
}

int main(){
    vector<int> gh{11,13,21,3};
    check(gh);

    return 0;
}