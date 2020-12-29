#include<bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int left, int right, int s){
    int m;
    while(left <= right){
        m = left + (right - left) / 2;
        if(arr[m] == s){
            return m;
        }
        else if(arr[m] > s){
            right = m - 1;
        }
        else{
            left = m + 1;
        }
    }
    return -2;
}
int searchRotatedArray(int arr[], int left, int right, int s, int n) {
  int m;
  while(left < right){
      m = left + (right - left) / 2;
      if(arr[m] > arr[right]){
          left = m + 1;
      }
      else{
          right = m;
     }
  }
     int pivot = left; 
     left = 0;
     right = n ; 
    if (s >= arr[pivot] && s <= arr[right])
        left = pivot;
    else
        right = pivot; 
    
    return(binarySearch(arr, left,  right, s));
    return -1;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
     int left;
    int right;
    cin>>left;
    cin>>right;
    int s;
    cin>>s;
    cout<<searchRotatedArray(arr, left, right, s, n);
    return 0;
}