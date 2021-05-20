#include<bits/stdc++.h>

using namespace std;

void solve(int n){
    while(n%2020 != 0){
        if(n%2021 == 0){
            cout<<"YES"<<endl;
            return;
        }
        n-=2021;
        if(n<2020){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }

    return 0;
}