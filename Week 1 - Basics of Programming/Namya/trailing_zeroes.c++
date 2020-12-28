#include<bits/stdc++.h>
using namespace std;
//space : O(1)
//time : O(n)
int main(){
    int n;
    cin>>n;
    int tz = 0;
    int pof = 1;
    while((n / pow(5, pof)) > 0){
        tz += n / pow(5, pof);
        pof += 1;
    }
    cout<<tz;
    return 0;
}