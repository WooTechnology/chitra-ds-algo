#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int searchForString(string arr[], int size, string target) {
  int low = 0, high = size - 1;
  while(low <= high){
      int mid = (low + high) / 2;
      if(arr[mid] == "\"\""){
          int i = mid, j = mid;
          while(i < size - 1 || j >= 1){
              if(i < size - 1){
                  if(arr[++i] != "\"\"" && i <= high){
                      mid = i;
                      break;
                    }
                }
                if(j >= 1){
                    if(arr[--j] != "\"\"" && j >= low){
                        mid = j;
                        break;
                    }
                }
            }
            if(arr[mid] == "\"\""){
                return -1;
            }
          }
        if(arr[mid] == target) return mid;
        else if(target > arr[mid]) low = mid + 1;
        else high = mid - 1;
      }
      return -1;
  }

int main(){
    int size;
    cin>>size;
    string arr[size];
    for(int i = 0; i < size; i++){
        string sl;
        cin>>sl;
        transform(sl.begin(), sl.end(), sl.begin(), ::tolower); 
        arr[i] = sl;
    }
    string target;
    cin>>target;
    cout<<searchForString(arr, size, target);
    return 0;
}