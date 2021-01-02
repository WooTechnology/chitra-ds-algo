#include<bits/stdc++.h>
using namespace std;
//set every row and column to zero if a zero is present
//time is O(m*n)
//space is O(number of zero elements)
//worst space is O(m*n)
int main(){
    vector<vector<int>> matrix;
    pair <int, int> p;
    int r, c;
    cin>>r>>c;
    vector<pair<int, int>> zero_pos;
    for(int i = 0; i < r; i++){
        vector<int> r;  
        for(int j = 0; j < c; j++){
            int x;
            cin>>x;
            r.push_back(x);
            if(x == 0){
                p.first = i;
                p.second = j;
                zero_pos.push_back(p);
            }
           
          
        }
        matrix.push_back(r);
    }
    cout<<endl;
    for(auto x : zero_pos){
        cout<<x.first<<" "<<x.second<<endl;
    }
    for (auto x : zero_pos){
        for(int i = 0; i < c; i++){
            matrix[x.first][i] = 0;
        }
        for(int i = 0; i < r; i++){
            matrix[i][x.second] = 0;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}