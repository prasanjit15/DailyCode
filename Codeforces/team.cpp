#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int cnt = 0;
    while(t--){
        int a = 0, b = 0, c = 0;
        cin>>a>>b>>c;
        if( a == 1 && b == 1)
            cnt++;
        else if(a == 1 && c == 1)
            cnt++;
        else if(b == 1 && c == 1)
            cnt++;
        else if(a == 1 && b == 1 && c == 1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}