#include<iostream>
using namespace std;
int * mergeArrays(int a[], int b[], int arr1Size,int arr2Size)
{
    int * c = new int[arr1Size + arr2Size]; // creating new arra
    int la = arr1Size;
    int lb = arr2Size;
    int lc = la + lb;
    int ind = 0, sa = 0, sb = 0;
    //int* c;
    //int c[lc];
    for(int i= 0, j = 0, k = 0 ; i < lc; i++){
        if (j < la && k < lb){
        
            if (a[j] < b[k]){
                c[i] = a[j];
                j += 1;
            }
            else if(a[j] > b[k]){
                c[i] = b[k];
                k += 1;
            }
            else{
                c[i] = b[k];
                k += 1;
                j += 1;
                lc = lc - 1;
            }
        }
        else {
            ind = i;
            if (j == la) {
                sb = k;
                break;
            }
            else if(k == lb){
                sa = j;
                break;
            }
    }
}
    if (sa != 0){
        for(int i = sa, q = ind; i < la, q < lc; i++, q++) {
            c[q] = a[i];
            //cout<<a[i]<< " ";
        }
    }
    else if(sb != 0){
        for(int i = sb, q = ind; i < lb, q < lc; i++, q++){
            c[q] = b[i];
            //cout<<b[i]<<" ";
        }
    }
    return c; // returning array
}

int main() {
    int size1, size2;
    cin>>size1;
    cin>>size2;
    int arr[size1], arr1[size2];
    for(int i = 0; i < size1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < size2; i++){
        cin>>arr1[i];
    }
    int * arr2 = mergeArrays(arr, arr1, size1, size2); 
    for(int i=0; i< size1+size2 ; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}