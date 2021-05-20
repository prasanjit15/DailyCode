#include<bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int pivot(int arr[], int l, int r){
    int pv = arr[r];

    int i = l - 1;

    for(int j = l; j<=r-1; j++){
        if(arr[j] < pv){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[r]);

    return i+1;
}

void quicksort(int arr[], int l, int r){
    if(l <r){
        int pv = pivot(arr, l, r);
        quicksort(arr, l, pv-1);
        quicksort(arr, pv+1, r);
    }
} 

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    quicksort(arr, 0, n-1);

    printarray(arr, n);

    return 0;
}