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
    
    int zero = 0;
    int one = a.size() - 1;
    while(zero < one){
        if(a[zero] > 0 && a[one] < 0){
            swap(a[zero], a[one]);
        }
        else if(a[zero] < 0){
            zero += 1;
        }
        else if(a[one] > 1){
            one -= 1;
        }
    }
    for(auto x : a){
        cout<<x<<" ";
    }
    return 0;
}