//Check if a string is palindrome or not
#include <bits/stdc++.h>

using namespace std;

int main(){
    string sh;

    cout<<"Enter the string: ";
    cin>>sh;

    int mid = sh.length()/2;
    int i = 0;
    int j = sh.size() - 1;
    int flag = 0;

    while(i<j){
        if(sh[i] != sh[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag > 0){
        cout<<"Not palindrome";
    }
    else
    {
        cout<<"Is Palindrome";
    }
    
    return 0;
}