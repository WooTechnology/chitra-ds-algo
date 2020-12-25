#include<bits/stdc++.h>

using namespace std;
//space : O(1)
//time : O(1)
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"Maximum is "<<max(a, max(b, c))<<endl;
    cout<<"Minimum is "<<min(a, min(b, c))<<endl;
    return 0;
}
