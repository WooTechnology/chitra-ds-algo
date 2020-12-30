// to find n'th fibonacci Number 
// Binet’s formula - Fn = {[(√5 + 1)/2] ^ n} / √5 

// #include<bits/stdc++.h> 
#include<iostream>
using namespace std;

#define ll long long int
#define base_term (1+sqrt(5))/2 

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout<<"Enter\n";
    int n;
    cin>>n;
    cout<< round((pow(base_term, n))/sqrt(5));
    return 0;
}