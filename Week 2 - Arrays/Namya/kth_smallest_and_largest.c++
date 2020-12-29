#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cin>>k;
    sort(arr.begin(), arr.end());
    cout<<"Kth smallest is "<<arr[k - 1]<<endl;
    cout<<"Kth largest is "<<arr[arr.size() - k - 1];
    return 0;
}