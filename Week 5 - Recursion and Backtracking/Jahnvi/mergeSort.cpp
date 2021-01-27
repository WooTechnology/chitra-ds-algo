#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
	//doing comparisons and clubbing arrays
	//2 pointer approach to keep track of index of subarrays
	//comparisons will be made
	
	int i=start; //left subarray
	int j= mid+1; //right subarray
	int k=start; //temp array
	
	int temp[end+1];
	while(i<= mid && j<=end){
		if(arr[i]<=arr[j]) {
			temp[k]=arr[i];
			i++;
			k++;
		}
		else{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end){
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int merge= start; merge<=end; merge++){
		arr[merge]=temp[merge];
	}
	
	
}


void mergesort(int arr[], int start, int end){
	if(start<end){
		int mid= (start+end)/2;
		mergesort(arr, start, mid);
		mergesort(arr, mid+1, end);
		merge(arr,start, mid, end);
	}
}



int main(){
	
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	mergesort(arr, 0, size-1);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

