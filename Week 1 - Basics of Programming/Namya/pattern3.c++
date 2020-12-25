#include<iostream>
using namespace std;
/*To print the pattern
 1
 22
 303
 4004
 50005
 600006
 */

int main(){
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i = 2; i <= n; i++){
        int zeroes = i - 2;
        cout<<i;
        while(zeroes > 0){
            cout<<0;
            zeroes -= 1;
        }
        cout<<i;
        cout<<endl;
    }
    return 0;
}

