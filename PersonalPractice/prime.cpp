//Sieve Of Eratosthenes

#include <bits/stdc++.h>

using namespace std;

void soe(int n){
    bool arr[n+1];
    memset(arr, true, sizeof(arr));

    arr[0] = arr[1] = false;

    for(int i = 2; i<=sqrt(n); i++){
        if(arr[i] == true){
            for(int j = 2; i * j <=n; j++){
                arr[i*j] = false;
            }
        }
    }

    for(int i = 2; i<=n+1; i++){
        if(arr[i] == true){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n = 0;
    cin>>n;

    soe(n);
    return 0;
}