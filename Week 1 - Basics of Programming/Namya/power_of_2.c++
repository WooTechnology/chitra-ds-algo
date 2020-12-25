#include<bits/stdc++.h>
using namespace std;
//space : O(1)
//time : O(1)
int main(){
    int n;
    cin>>n;
    if (!(n & (n-1))){
        cout<<"Power of 2"<<endl;
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}