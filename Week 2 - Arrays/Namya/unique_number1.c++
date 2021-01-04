#define f(i, n) for(int i = 0; i < n; i++)
#include<bits/stdc++.h>
using namespace std;

//the idea is on performing xor a xor 0 is a
//on performing a xor a is 0, so as there is only one number which exists once, the value that remains will be it
int main(){
    vector<int> arr;
    int n, i;
    cin>>n;
    f(i, n){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int u = 0;
    f(i, n){
        u = u ^ arr[i];
    }
    cout<<u;
    return 0;
}