#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int d;
    int s = 0;
    int rev = 0;
    int num = n;
    while(n){
        d = n % 10;
        s += d*d*d;
        n = n / 10;
    }
    return (num == s);
}
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    if(armstrong(n)){
        cout<<"Is armstrong ";
    }
    else{
        cout<<"Not armstrong";
    }
    return 0;
}