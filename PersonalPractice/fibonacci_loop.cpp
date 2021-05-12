#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<0<<","<<1<<",";
    int n1=0, n2=1, n3;
    while((n-2) > 0){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        n--;
        cout<<n3<<",";
    }

    return 0;
}