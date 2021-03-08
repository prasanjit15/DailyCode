#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string su;
    cin>>s;
    for(int i = 0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            su = su + '.' + s[i];
        }
    }
    cout<<su<<endl;
    return 0;
}