#include<bits/stdc++.h>

using namespace std;

void printrom(int fg){
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
	string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int i = 12;

    while(fg>0){
        int div = fg/num[i];
        fg = fg%num[i];

        while(div--){
            cout<<sym[i];
        }
        i--;
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the number: ";
    int x;
    cin>>x;
    printrom(x);

    return 0;
}