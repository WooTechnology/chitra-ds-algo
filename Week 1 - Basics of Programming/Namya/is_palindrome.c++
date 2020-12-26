#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int d;
    int num = n;
    int rev = 0;
    while(n){
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return (rev == num);
}
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
        cout<<"Is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }   
    return 0;
}