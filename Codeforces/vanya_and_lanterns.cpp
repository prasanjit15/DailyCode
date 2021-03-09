#include <bits/stdc++.h>
#define for(i, m) for(long long i = 0; i<m; i++)

using namespace std;

int main(){
    int sz = 0;
    cin>>sz;

    int len = 0;
    cin>>len;

    vector<double> pos;

    for(i, sz){
        int h;
        cin>>h;
        pos.push_back(h);
    }

    sort(pos.begin(), pos.end());
    double maxdiff = 2 * max(pos[0], len - pos[sz-1]);

    for(i, pos.size() - 1){
        maxdiff = max(maxdiff, pos[i+1] - pos[i]);
    }  

    cout<<fixed<<setprecision(10)<<maxdiff/2<<endl;

    return 0;
}