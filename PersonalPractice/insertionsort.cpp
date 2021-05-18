#include<bits/stdc++.h>

using namespace std;

void insertionsort(int arr[], int n){
    for(int i = 2; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(j; j>=0; j--){  
            if(temp <= arr[j]){
                arr[j+1] = arr[j];
            }
        }    
        arr[j+1] = temp;
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
 

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    insertionsort(arr, n);

    cout << "\nSorted array is \n";
    printArray(arr, n);
    cout<<endl;
    

    return 0;
}