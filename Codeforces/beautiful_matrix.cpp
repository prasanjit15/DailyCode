#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[5][4];
    int posi;
    int posj;
    for(int i = 0; i<5; i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3]>>arr[i][4];
        if(arr[i][0]== 1){
            posi = i;
            posj = 0;
        }else if(arr[i][1] == 1 ){
            posi = i;
            posj = 1;
        }else if(arr[i][2] == 1){
            posi = i;
            posj = 2;
        }else if(arr[i][3] == 1){
            posi = i;
            posj = 3;
        }else if(arr[i][4] == 1){
            posi = i;
            posj = 4;
        }
    }
    posi += 1;
    posj += 1;

    int ans = abs(posi - 3) + abs(posj - 3);
    cout<<ans;
    return 0;
}