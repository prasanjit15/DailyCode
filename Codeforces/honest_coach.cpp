#include <bits/stdc++.h>
#define for(i, m) for(long long i = 0; i<m; i++)

using namespace std;

int main(){
    int n = 0;
    cin>>n;

    while(n--){
        int len = 0;
        cin>>len;

        vector<int> pos;

        for(i, len){
            int h;
            cin>>h;
            pos.push_back(h);
        }

        sort(pos.begin(), pos.end());

        int ans = INT_MAX;
        for(i, pos.size() - 1){
            ans = min(ans, pos[i+1] - pos[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}