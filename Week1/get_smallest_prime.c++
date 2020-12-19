#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

//Sieve of eratosthenes
//to get primes till n

//Time complexity is O(n*log(logn))
//Space is O(n)

//1 for composite
//0 for prime

//difference between printing n prime numbers
//to print numbers till
int main(){
    int n;
    cin>>n;
    int nums[n];
    //allocate values
    memset(nums, 0, sizeof(nums)); 
    /*for(int i = 0; i <= n; i++){
        nums[i] = 0;
    }*/
    //0 and 1 are exceptions
    nums[0] = 1;
    nums[1] = 1;
    for(int i = 2; i*i <= n; i++){
        for(int j = i * i; j < n; j += i){
            nums[j] = j;
        }
    }
    for(int i = 0; i <= n; i++){
        if (!nums[i]){
            cout<<i;
            break;
        }
    }
    cout<<endl;
    return 0;
}