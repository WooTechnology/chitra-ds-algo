#include<iostream>
using namespace std;
double getMedian(int arr1[], int arr2[], int size1, int size2) {
  int arr3[size1 + size2];
  int i = 0, j = 0;
  while(j < size1){
      arr3[i] = arr1[j];
      i += 1;
      j += 1;
  }
  j = 0;
  while(j < size2){
      arr3[i] = arr2[j];
      i += 1;
      j += 1;
  }
  if((size1+ size2) & 1){
      int mid = (size1 + size2) / 2;
      return(arr3[mid]);
  }
  else{
      int m = (size1 + size2) / 2;
      int m1 = m + 1;
      return((arr3[m] + arr3[m1]) / 2);
  }
  return -1;
}
int main(){
    int size1, size2;
    cin>>size1;
    int arr1[size1];
    for(int i = 0; i < size1; i++){
        cin>>arr1[i];
    }
    cin>>size2;
    int arr2[size2];
    for(int i = 0; i < size2; i++){
        cin>>arr2[i];
    }
    cout<<getMedian(arr1, arr2, size1, size2);
    return 0;
}