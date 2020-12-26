#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int d;
    int count = 0;
    while(n){
        d = n % 10;
        count += 1;
        n = n / 10;
    }
    return count;
}
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}