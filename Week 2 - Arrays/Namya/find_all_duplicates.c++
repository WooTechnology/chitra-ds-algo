#include <iostream>
#include <vector>
#include <unordered_map>
#include<bits/stdc++.h>
using namespace std;

/*
Given an array print all duplicates
arr = [1,3,5,3,4,100,100]
o/p 100,4,3
*/

vector <int> findDuplicates(int arr[], int arrSize) {
  vector <int> duplicates = {-1}; 
  sort(arr, arr+arrSize);
  int l = 0;
  int r = 1;
  while(r != arrSize){
      if(arr[l] == arr[r]){
          r += 1;
          if(duplicates[duplicates.size()-1] != arr[l]){
              duplicates.push_back(arr[r]);
          }
      }
      else{
          l += 1;
          r = l - 1;
      }
  }
  return duplicates;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    int el;
    for(int i = 0; i < size; i++){
        cin>>el;
        arr[i] = el;
    }
    vector<int> duplicates = findDuplicates(arr, size);
    string withDuplicates = "";
    for(int i = duplicates.size()-1; i > 0; i--){
        withDuplicates += to_string(duplicates[i]) + ",";
    }
    withDuplicates.pop_back();
    cout<<withDuplicates;
    return 0;
}