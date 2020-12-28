#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fastExpo(float x, int n){
    float result = 1.0;
    if(n < 0){
        x = 1 / x;
        n = -1 * n;
    }
    while(n > 0){
        if (n & 1){
            result *= x;
        }
        x *= x;
        n = n >> 1;
    }
    return result;
}

int main(){
    //space is O(1)
    //time is O(nlogn) as opposed to O(n)
    //logic is that each number is either a multiple of 2 or is odd

    int n;
    float x;
    //n is the power
    //x is the base
    cout<<"Enter base and exponent"<<endl;
    cin>>x>>n;
    cout<<fastExpo(x, n);
    return 0;
}