#include<bits/stdc++.h>

using namespace std;

int head_count(int I, int N){
    if((I == 2) && (N%2 != 0))
        return N/2 +1;
    
    return N/2;
}

int main(){
    int G;
    int T;
    int I, N, Q, res, head;

    cin>>T;

    while(T--){
        cin>>G;
        while(G--){
            cin>>I>>N>>Q;
            head = head_count(I, N);

            if(Q == 1)
                res = head;
            else
                res = N - head;
            
            cout<<res<<endl;
        }
    }
    return 0;
}