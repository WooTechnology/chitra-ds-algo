#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> nums) {
        nums.push_back(0);
        int k = 0;
        int mx = 0;
        int ct = 0;
        for(auto x : nums){
            if (x == 1){
                ct += 1;
                mx = max(mx, ct);
            }
            else{
                ct = 0;
            }
        }
        return mx;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    arr.push_back(0);
    int p1 = 0, p2 = 0;
    while(n--){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k = 0;
   cout<<findMaxConsecutiveOnes(arr);
    return 0;
}