#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    int s;
    cin>>s;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(int i = 0; i<s; i++){
        int d;
        cin>>d;
        if(d == 1)  c1++;
        if(d == 2)  c2++;
        if(d == 3)  c3++;
        if(d == 4)  c4++;
    }
    int ans = c4;
    while(c1 != 0 && c3 != 0){
        c3--;
        c1--;
        ans++;
    }

    if(c1 == 0 && c3 != 0){
        ans += c3;
        c3 = 0;
    }

    ans = ans + c2/2;
    if(c2%2 != 0){
        if(c1 <= 2){
            ans++;
            c1 = 0;
            c2 = 0;
        }
        else{
            c1 = c1 - 2;
            c2 = 0;
            ans++;
        }
    }

    if(c1 != 0){
        ans += c1/4;
        if(c1 % 4 != 0){
            ans++;
        }
    } 
    
    cout<<ans<<endl;
    return 0;
}