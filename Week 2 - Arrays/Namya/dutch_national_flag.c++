#include<iostream>
using namespace std;
void DutchNationalFlag(int arr[], int size) {
 int p0 = 0, p1 = 0, p2 = size - 1;
   while(p1 <= p2){
        if(arr[p1] == 1){
            p1 += 1;
        }
        else if(arr[p1] == 0){
            int t = arr[p1];
            arr[p1] = arr[p0];
            arr[p0] = t;
            p1 += 1;
            p0 += 1;
        }
        else{
            int t = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = t;
            p2 -= 1;
        }
   }
 
 for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i < size; i++){
        cin>>arr[i];
    }
    DutchNationalFlag(arr, size);
    return 0;
}