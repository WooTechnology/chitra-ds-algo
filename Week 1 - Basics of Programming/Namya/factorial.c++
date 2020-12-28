#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int f = 1;
    if (n == 1){
        return 1;
    }
    return (n * factorial(n-1));
}
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}