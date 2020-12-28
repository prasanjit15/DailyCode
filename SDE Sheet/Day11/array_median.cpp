//Find the median of two sorted arrays

#include<iostream>

using namespace std;

double m2(int a, int b){
    return ((a+b)/2.0);
}

double m3(int a, int b, int c){
    return ((a+b+c) - max(a, max(b, c)) - min(a, min(b, c)));
}

double m4(int a, int b, int c, int d){
    int maxi = max(a, max(b, max(c, d)));
    int mini = min(a, min(b, min(c, d)));

    return ((a+b+c) - maxi - mini)/2.0;
}

double m1(int arr[], int n){
    if(n == 0)
        return -1;
    if(n%2 == 0)
        return ((arr[n/2] + arr[n/2 - 1])/2);
    
    return arr[n/2];
}

double findmedian(int arr1[], int n, int arr2[], int m){
    if(n == 0)
        return m1(arr2, m);
    
    if(n == 1){
        if(m == 1)
            return m2(arr1[0], arr2[0]);
        if(m % 2 != 0)
            return m2(arr2[m/2], m3(arr1[0], arr2[m/2 - 1], arr2[m/2 + 1]));

        return m3(arr2[m/2], arr2[m/2 - 1], arr1[0]); 
    }

    else if(n == 2){
        if(m == 2)
            return m4(arr1[0], arr1[1], arr2[0], arr2[1]);
        
        if(m % 2 != 0)
            return m3( arr2[m/2], max(arr1[0], arr2[m/2 - 1]), min(arr1[1], arr2[m/2 + 1]));
        
        return m4(arr2[m/2], arr2[m/2 - 1], max(arr1[0], arr2[m/2 - 2]), min(arr1[1], arr2[m/2+1]));
    }

    int ida = (n-1) /2;
    int idb = (m - 1)/2;

    if(arr1[ida] <= arr2[idb])
        return findmedian(arr1 + ida, n/2+1, arr2, m - ida);
    
    return findmedian(arr1, n/2 + 1, arr2 + ida, m - ida);

}


int main(){
    int A[] = {900};
    int B[] = {5, 8, 10, 20};
 
    int N = sizeof(A) / sizeof(A[0]);
    int M = sizeof(B) / sizeof(B[0]);
    
    if(N > M)
        cout<<findmedian(B, M, A, N)<<endl;
    else
        cout<<findmedian(A, N, B, M)<<endl;
    
    return 0;
}