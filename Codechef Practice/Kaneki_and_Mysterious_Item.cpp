#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

void solve(){
    ull N,H,W;
    cin >> N >> H >> W;
    ull mini=0,maxi=N*max(H,W);
    while(mini+1<maxi){
        ull mid=mini+(maxi-mini)/2;
        if((mid/H)*(mid/W)>=N)
            maxi=mid;
        else mini=mid;
    }
    cout << maxi << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}
