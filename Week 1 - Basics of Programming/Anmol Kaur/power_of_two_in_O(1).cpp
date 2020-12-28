#include<iostream>
using namespace std;

bool power_of_two(int n){
return (n&(n-1));    
}

int main(){
    int n;
    cin>>n;
    cout<<!(power_of_two(n)); // n & n-1 return 0 if n is a power of two  
    return 0;
}

    // other method to do this 
    // time complexity: O(n)

    // while(n%2 ==0)
    // {
    // 	N = n/2;
    // }

    // if(n==1)
    // 	Return true;
    // Else
    // 	Return false;
