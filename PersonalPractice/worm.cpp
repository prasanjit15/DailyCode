#include<bits/stdc++.h>

using namespace std;


int main(){
    long range[1000001];
    int pl = 1;
    int ind = 1;
    int w;
    int p;
    cin>>p;
    while(p--){
        cin>>w;
        for(int i = 0; i<w; i++){
            range[ind] = pl;
            ind++;
        }
        pl++;
    }


    int x;
    cin>>x;
    while(x--){
        int z;
        cin>>z;
        cout<<range[z]<<endl;
    }
    
    return 0;
}