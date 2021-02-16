#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        string y;
        cin>>x;
        cin>>y;
        set<char> st;
        for(int i = 0; i<x.size(); i++){
            st.insert(x[i]);
        }

        int cnt = 0;
        for(int i = 0; i<y.size(); i++){
            if(st.find(y[i]) != st.end()){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}