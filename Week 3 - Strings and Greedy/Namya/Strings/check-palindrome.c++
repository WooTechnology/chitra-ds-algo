#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[n-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Not a palindrome";
    }
    else{
        cout<<"Is a palindrome";
    }
    return 0;
}