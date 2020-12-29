#include<iostream>
using namespace std;
 void rotateArray(int arr[], int size, int nor) {

  //to get a complete rotation just run it size number of times
  int temp;
  for(int k = 0 ; k < nor; k++){
  temp = arr[0];
  for(int i = 0; i < size-1; i++ ){
      arr[i] = arr[i+1];
  }
  arr[size-1] = temp;
  }
  cout << "Array after rotation: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}
int main(){
  int size = 6;
  int nor = 3;
  int arr[size] = {3,6,1,8,4,2};
  cout << "Array before rotation: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  //cin>>nor;
  cout << endl;
  rotateArray(arr,size, nor);
  cout << endl;
}