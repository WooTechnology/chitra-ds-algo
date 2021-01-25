#include <iostream>
using namespace std;
int main() {
    int n, target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int start=0, end= n-1;
    while(start<=end){
        if(arr[start]+ arr[end]==target){
            cout<<" indices are "<<start<<" "<<end<<endl;
            break;
        }
        else if((arr[start]+ arr[end])>target){
           end--;
        }
        else start++;
    }

}
