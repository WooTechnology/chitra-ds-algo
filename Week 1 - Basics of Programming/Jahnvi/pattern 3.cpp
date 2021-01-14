#include<iostream>
using namespace std;
/*
print:
1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
*/

int main(){
    int n;
    cin>>n;
    int star= n;
    while(n >= 1){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        for(int j= star-n;j>0;j--){
            cout<<"*"<<" ";
        }
        n--;
        cout<<endl;
    }
    return 0;
}
