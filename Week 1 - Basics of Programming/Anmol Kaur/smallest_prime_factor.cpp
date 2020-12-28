#include<iostream>
using namespace std;

int check_leastprime(int n){
    if(n%2==0) return 2;
    for(int i =3; i*i<=n ; i+=2){
        if (n%i ==0) return i;
    }
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<check_leastprime(n);
    return 0;
}