#include<iostream>
using namespace std;

//quick sort algo with partitioning

/*int partition(int arr[], int start, int end){
	int pivot= arr[end];
	int p_idx= start;
	for(int i=start; i<end;i++) //for comparison
	{ 
	  if(arr[i]<=pivot){
	  	int temp=arr[i];
	  	arr[i]=arr[p_idx];
	  	arr[p_idx]=temp;
	  	p_idx++;
	  }
		
	}
	int temp=arr[end];
	arr[end]=arr[p_idx];
	arr[p_idx]=temp;
	
	return p_idx;
	
}
*/
int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
 
 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pIndex];
 arr[pIndex] = temp;
  pIndex++;
 }
 }
 
 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp;
 
 return pIndex;
}

void quicksort(int arr[], int start_idx, int end_idx){
	if(start_idx < end_idx){
	  int p= Partition(arr, start_idx, end_idx); 
	  quicksort(arr, start_idx, p-1); //recursive call for left partition
	  quicksort(arr, p+1, end_idx); //recursive call for rightpartition
	}
	
}

int main(){
	
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	quicksort(arr, 0, size-1);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}


