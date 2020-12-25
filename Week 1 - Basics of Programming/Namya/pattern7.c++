#include<bits/stdc++.h>
using namespace std;
/*To print the pattern
                          1
                      2 1  1 2
                    3 2 1   1 2 3 
                  4 3 2 1   1 2 3 4 
                    3 2 1   1 2 3 
                        2 1 1 2 
                            1
*/
int main(){
    int n;
    cin>>n;
    int sp = n;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < sp; j++){
            cout<<" ";
        }        
        sp -= 1;
        for(int j = i+1; j >= 1; j--){
            cout<<j;
        }
        for(int j = 1; j <= i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}