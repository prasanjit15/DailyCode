#include <bits/stdc++.h>

using namespace std;

void insertionsort(int arr[], int n){
    int key, j;

    for(int i = 1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }   
}

int main(){
    int arr[]  = {4, 5, 2, 1, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 

    insertionsort(arr, n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}