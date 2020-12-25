#include<bits/stdc++.h>
using namespace std;

//Other functions that are builtin into the GCC compiler
//https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/


//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    cout<<__builtin_popcount(n);
    return 0;
} 