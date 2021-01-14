#include<iostream>
using namespace std;
/*
print:
1
22
303
4004
50005
*/

int main(){
    int n;
    cin>>n;
    cout<<1<<endl;
    for(int i=2;i<=n;i++){
        int z= i-2;
        cout<<i;
        while(z > 0){
            cout<<"0";
            z-= 1;
        }
        cout<<i;
        cout<<endl;
    }
    return 0;
}
