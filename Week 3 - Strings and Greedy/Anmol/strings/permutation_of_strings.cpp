#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    getline(cin,str);
    do{
        cout<<str<<endl;
    } while(next_permutation(str.begin(),str.end()));
    
    return 0;
}
