#include<bits/stdc++.h>
using namespace std;

int trapWater(vector<int> h){
    vector<int> lmax, rmax;
    lmax.push_back(h[0]);
    for(int i = 1; i < h.size(); i++){
        lmax.push_back(max(h[i], lmax[lmax.size() - 1]));
    }
    rmax.push_back(h[h.size()-1]);
    for(int i = h.size() - 2; i >= 0 ; i--){
         rmax.push_back(max(h[i], rmax[rmax.size() - 1]));
    }
     int totalRainWater = 0;
    for(int i = 0; i < h.size(); i++)
        totalRainWater += min(lmax[i],  rmax[rmax.size()-1-i]) - h[i];
    return totalRainWater;
    return 9;
}

int main(){
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trapWater(h);
    return 0;
}