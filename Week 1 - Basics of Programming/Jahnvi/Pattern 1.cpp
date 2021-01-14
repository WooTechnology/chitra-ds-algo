#include<iostream>
using namespace std;
/*
print:
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
    for(int i=1;i<=n;i++){
        if (i & 1){
            int x = i;
            while(x > 0){
                cout<<"1";
                x -= 1;
            }   
        }
        else{
            int z = i - 2;
            cout<<"1";
            while(z > 0){
                cout<<"0";
                z -= 1;
            }
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}
