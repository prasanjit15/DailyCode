//Find Duplicate of a number in time = O(n) and Space = O(1)

#include<iostream>

using namespace std;

int dup(int arr[], int h){
	
	for(int i = 0; i<h; i++){
		arr[arr[i] % h] = arr[arr[i] % h] + h; 
	}
	cout<<"The repeating elements are: ";
	for(int i = 0; i<h; i++){
		if(arr[i] >= h*2)
			cout<<i<<" ";
	}
}


int main(){
	int arr[] = {1, 3, 5, 9, 8, 4, 3, 5};
	int h = sizeof(arr)/sizeof(arr[0]);
	
	dup(arr, h);
	return 0;
}
