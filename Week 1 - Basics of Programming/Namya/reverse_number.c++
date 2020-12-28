#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int d;
    int rev = 0;
    while(n){
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}