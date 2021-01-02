#define f(i, n) for(int i = 0; i < n; i++)
#include<bits/stdc++.h>
using namespace std;
//applicable for elements within a range where we can create an array and then increment the count
int main(){
    vector<int> arr;
    int n, i;
    cin>>n;
    int minval = INT_MAX, maxval = INT_MIN;
    f(i, n){
        int x;
        cin>>x;
        minval = min(minval, x);
        maxval = max(maxval, x);
        arr.push_back(x);
    }
    vector<int> csort(maxval - minval + 1, 0); 
    for(int i = 0; i < arr.size(); i++){
        csort[arr[i] - minval] += 1;
    }
    for(int i = 0; i < csort.size(); i++){
        if (csort[i]){
            for(int j = 0; j < csort[i]; j++){
                cout<<i + minval<<" ";
            }
        }
    }
    return 0;
}

