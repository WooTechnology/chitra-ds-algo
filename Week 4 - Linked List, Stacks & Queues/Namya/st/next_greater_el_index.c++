#include<bits/stdc++.h>
int* nextGreaterElement(int *arr, int size) {
    int* next_grt = new int[size];
    myStack stack(size); 
    stack.push(arr[0]);
    int index = 0;
    for(int i = 1; i < size; i++){
        myStack temp(size);
        while(stack.getSize() != 0 && arr[i] > stack.getTop()){
            int u = stack.pop();
            temp.push(arr[i]);
            //next_grt[index++] = arr[i];
        }
        while(temp.getSize() != 0){
            next_grt[index++] = temp.pop();
        }
        stack.push(arr[i]);
    }
    while(stack.getSize() != 0){
        stack.pop();
        next_grt[index++] = -1;
    }
    return(next_grt);
}

int main(){
  //with negative numbers is a little confusing
   //int arr[] = {11, 13, -21, -20, 89, 3}; what would u do in such a case?
   int arr[] = {4,6,3,2,8,1,9,9};
   //int arr[] = {2, 4, 7, 1, 6, 8, 11, 5, 14, 12}; 
   ///int arr[] = {6,5,-23,-20,23,-29,12};
   int arr_size=sizeof(arr) / sizeof(arr[0]); 
   int* res=nextGreaterElement(arr,arr_size);
    cout << "____Result____" << endl;
   for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " ---> " << res[i] << endl; 
  
}