#include<iostream>
using namespace std;
/*To print the pattern
 1
 11
 111
 1001
 11111
 100001
 */

int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if (i & 1){
            int x = i;
            while(x > 0){
                cout<<1;
                x -= 1;
            }   
        }
        else{
            int zeroes = i - 2;
            cout<<1;
            while(zeroes > 0){
                cout<<0;
                zeroes -= 1;
            }
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}

