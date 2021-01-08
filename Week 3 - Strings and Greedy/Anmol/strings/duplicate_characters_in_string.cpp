// Find duplicate characters in a string
#include<bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<char,int> mp;
    string j = "HELLO WO";
    for(int i =0 ;i<j.length(); i++){
        mp[j[i]]++;
    }
    for(auto it: mp){
        if(it.second>1){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    return 0;
}
