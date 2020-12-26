#include<bits/stdc++.h>
using namespace std;

int main(){
        // ios_base::sync_with_stdio(false);
        // cin.tie(0);
        // cout.tie(0);
    int n;
    cout<<"Enter a positive number n to find whether it's prime or not\n";
    cin>>n;
    for(int i =2; i *i <=n; i++){
        if(n % i == 0)
        {
          cout<<"NOT a Prime Number\n";
          return 1;
        }        
    }
    cout<<"YES!!!!! "<<n<<" is a Prime Number\n";
    return 0;
}