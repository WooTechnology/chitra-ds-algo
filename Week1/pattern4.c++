#include<iostream>
#include<bits/stdc++.h>
/*To print the pattern
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
*/
using namespace std;
int main(){
    int n;
    cin>>n;
    int r = n;
    while(n >= 1){
        for(int i = 1; i <= n; i++){
            cout<<i;
        }
        for(int j = r-n; j > 0; j--){
            cout<<"*";
        }
        n -= 1;
        cout<<endl;
    }
    return 0;
}