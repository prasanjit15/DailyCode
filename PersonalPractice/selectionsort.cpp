#include<bits/stdc++.h>

using namespace std;

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

int i, j, mini;

void selectionsort(int arr[], int n){
    for(i = 0; i<n; i++){
        mini = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[mini])
            mini = j;
        }
        swap(&arr[i], &arr[mini]);
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

    selectionsort(arr, n);

    cout << "\nSorted array is \n";
    printArray(arr, n);
    cout<<endl;
    

    return 0;
}