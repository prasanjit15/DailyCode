#include<bits/stdc++.h>

using namespace std;

void reverseify(string st){
    vector<string> s;
    string temp;
    for(int i = 0; i<st.length(); i++){
        if(st[i] == ' '){
            s.push_back(temp);
            temp = "";
        }else{
            temp += st[i];
        }
    }
    s.push_back(temp);


    for(int i = s.size()-1; i>=0; i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the string: "<<endl;
    string st;
    getline(cin, st);

    reverseify(st);
    return 0;
}