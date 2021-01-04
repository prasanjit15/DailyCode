#include<bits/stdc++.h>
#include<typeinfo>

using namespace std;

int myat(string str){
    if(str.length() == 0)
        return 0;
    
    
    int res = 0;
    int sign = 1;
    int i = 0;

    while(str[i] == ' '){
        i++;
    }

    if(str[i] == '-'){
        sign = -1;
        i++;
    }

    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            res = res*10 + (str[i] - '0');
        }else{
            return 0;
        }
        i++;
    }
    return sign * res;
}

int main(){
    string s;
    cout<<"Enter the number: ";
    cin >> s;
    int xc = myat(s);
    cout<<"The number you entered is: "<<xc<<endl;
    return 0;
}