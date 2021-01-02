#include <iostream>
using namespace std;

int insertPosition(int arr[], int arrSize, int s) {   
  int pos = 0;
  int l = 0, r = arrSize - 1;
  int m;
  while(l <= r){
      m = l + (r-l)/ 2;
      if(arr[m] == s){
          return m;
      }
      else if(arr[m] > s){
          r = m - 1;
          pos = m;
      }
      else{
          pos = m + 1;
          l = m + 1;
      }
  }
  return pos;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    int element;
    for(int i = 0; i < size; i++){
        cin>>element;
        arr[i] = element;
    }
    int s;
    cin>>s;
    cout<<insertPosition(arr, size, s);
    return 0;
}