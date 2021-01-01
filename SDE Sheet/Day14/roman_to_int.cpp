#include<bits/stdc++.h>

using namespace std;
int value(char roman){
 switch(roman)
 {
    case 'I':return 1;
   case 'V':return 5;
   case 'X':return 10;
   case 'L':return 50;
   case 'C':return 100;
   case 'D':return 500;
   case 'M':return 1000;
 }
 return 0;
}

void converter(string ss){
    int n;
    int ans = 0;
    int p = 0;
    n = ss.length() - 1;

    for(int i = n; i>=0;i--){
        if(value(ss[i]) >= p)
            ans = ans + value(ss[i]);
        else
            ans = ans - value(ss[i]);
    p = value(ss[i]);
    }
    cout<<ss<<"---->"<<ans<<endl;
}

int main(){
    cout<<"Enter the number: ";
    string s;
    cin>>s;
    converter(s);

    return 0;
}