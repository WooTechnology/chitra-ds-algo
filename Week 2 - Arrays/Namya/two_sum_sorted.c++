#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i = 0; i < n ; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int target;
    cin>>target;
    int l = 0, r = n - 1;
    while(l < r){
        if (a[l] + a[r] == target){
            cout<<a[l]<<" "<<a[r];
            break;
        }
        else if(a[r] + a[l] < target){
            l += 1;
        }
        else{
            r -= 1;
        }
    }
    return 0;
}