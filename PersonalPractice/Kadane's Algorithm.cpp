//Kadane's Algorithm

#include <iostream>

using namespace std;

int max(int a, int b ){
	if(a>=b)
		return a;
	else 
		return b;
}
int kadane(int arr[], int n){
	int max_current = arr[0];
	int max_global = arr[0];
	for(int i = 0; i<n; i++){
		max_current = max(arr[i], max_current + arr[i]);
		if(max_current > max_global)
			max_global = max_current;
	}
	return max_global;
}

int main(){
	int arr[] = {-2, 3, 2, -1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int great = 0;
	great = kadane(arr, n);
	
	cout<<"The greatest sum of subarray is: "<<great<<endl;
	
	return 0;
}
