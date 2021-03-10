#include <bits/stdc++.h>
#include <algorithm>
#define for(i, m) for(int i = 0; i<m; i++)

using namespace std;

int main(){
    int sz;
    cin>>sz;
    int pr[sz+10];
    for(i, sz){
        int d;
        cin>>d;
        pr[i] = d;
    }

    int q;
    cin>>q;
    sort(pr, pr+sz);
    while(q--){
        int m;
        cin>>m;
        int ans = 0;
        ans = upper_bound(pr, pr+sz, m) - pr;
        
        cout<<ans<<endl;
    }
    return 0;
}