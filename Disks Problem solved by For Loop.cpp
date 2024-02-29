#include<iostream>
using namespace std;

void swap_disks(int arr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<" to ";
	
	for(int i=0;i<n/2;i=i+2){
    	swap(arr[i],arr[n/2+i+1]);
    	count++;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
	cout<<"Total number of inversions = "<<count<<endl;
}

int main() {
    int n = 8;
	int arr[n] = {1,0,1,0,1,0,1,0};
    swap_disks(arr,n);
    return 0;
}

