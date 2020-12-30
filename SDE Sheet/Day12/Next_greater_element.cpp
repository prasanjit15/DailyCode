#include<bits/stdc++.h>

using namespace std;

void check(vector<int> num){
    stack<int> st;
    st.push(num[0]);
    for(int i = 1; i<num.size(); i++){
        if(st.empty()){
            st.push(num[i]);
            continue;
        }

        while(!st.empty() && st.top() < num[i]){
            cout<<st.top()<<"----> "<<num[i]<<endl;
            st.pop();
        }

        st.push(num[i]);
    }
    
    while(!st.empty()){
        cout<<st.top()<<"----> "<<-1<<endl;
        st.pop();
    }
}

int main(){
    
    vector<int> arr{11,13, 21, 3};
    check(arr);
     
    return 0; 
}