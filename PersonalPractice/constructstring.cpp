#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
		ll n,a,b;
        cin>>n>>a>>b;
        
        char arr[2*a];
        ll A = a;
        ll j=0;
        while(a>0){
            for(ll i=97;i<97+b;i++){
                arr[j++] = (char)i;
            }
            a = a - b;
        }

        a = A;


        while(n>0){
            if(n-a>=0){
                for(ll i=0;i<a;i++){
                    cout<<arr[i];
                }
            }else{
                ll val = n;
                for(ll i=0;i<val;i++){
                    cout<<arr[i];
                }
            }
            n = n-a;
        }
        cout<<"\n";
    }
    return 0;
}