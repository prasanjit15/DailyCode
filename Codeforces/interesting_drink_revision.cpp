#include<bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin>>s;
    int pri[s];
    for(int i = 0; i<s; i++){
        cin>>pri[i];
    }

    int n;
    cin>>n;
    sort(pri, pri+s);
    for(int j = 0; j<n; j++){
        int z = 0;
        cin>>z;
        
        int ans = 0;
        ans = upper_bound(pri, pri+s,z) - pri;

        cout<<ans<<endl;
    }

    return 0;
     
}