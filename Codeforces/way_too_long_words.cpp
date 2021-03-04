#include<iostream>
#include <string.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d = s.length();
        if(d > 10){
            cout<<s[0]<<d-2<<s[d-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    return 0;
}