#include<bits/stdc++.h>

using namespace std;

void check(string c, string d){
    int count = 0;
    if(c.size() != d.size()){
        cout<<"Not an anagram!"<<endl;
        return;
    }

    for(int i = 0; i<c.size(); i++){
        count += c[i];
    }

    for(int i = 0; i<d.size(); i++){
        count -= d[i];
    }

    if(count == 0)
        cout<<"The strings are anagrams!"<<endl;
    else
    {
        cout<<"Not an anagram!"<<endl;
    }
}

int main(){
    string a;
    string b;

    cout<<"Enter the two strings: ";
    cin>>a>>b;
    check(a, b);

    return 0;
}