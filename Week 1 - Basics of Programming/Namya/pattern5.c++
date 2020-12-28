#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
1     1 
12   21 
123 321
1234321
*/
int main(){
    int n;
    cin>>n;
    int sp;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        sp = (n - i - 1) * 2 + 1;
        for(int p = sp; p > 0; p--){
            cout<<" ";
        }
        int q;
        if (i == n){
            q = i - 1;
        }
        else{
            q = i;
        }
       
        for(; q > 0; q--){
            cout<<q;
        }
        cout<<endl;
    }
    return 0;
}