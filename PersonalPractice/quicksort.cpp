#include<bits/stdc++.h>

using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int lb, int ub){
    int start = lb - 1;
    int pv = arr[ub];
    
    for(int i = lb; i <= ub -1; i++){
        if(arr[i] < pv){
            start++;
            swap(&arr[i], &arr[start]);
        }
    }
    swap(&arr[start+1], &arr[ub]);
    return start+1;
}

void quicksort(int arr[], int lb, int ub){
    if(lb < ub){
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc-1);
        quicksort(arr, loc+1, ub);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n);
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}