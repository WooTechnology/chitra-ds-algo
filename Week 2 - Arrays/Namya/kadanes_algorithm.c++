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
    int max_sum = arr[0];
    int curr_sum = 0;
    for(auto x : arr){
        curr_sum += x;
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    cout<<max_sum;
    return 0;
}