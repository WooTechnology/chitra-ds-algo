#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"Maximum is "<<max(a, max(b, c))<<endl;
    cout<<"Minimum is "<<min(a, min(b, c))<<endl;
    return 0;
}
