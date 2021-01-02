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
    int window_sum = 0;
    int max_sum = 0;
    for(int i = 0; i < k; i++){
        window_sum += arr[i];
    }
    max_sum = window_sum;
    for(int i = 0; i < arr.size() - k + 1; i++){
        window_sum = window_sum - arr[i] + arr[i + k];
        max_sum = max(max_sum, window_sum);
    }
    cout<<max_sum;
    return 0;
}