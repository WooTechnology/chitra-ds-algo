#include<bits/stdc++.h>
using namespace std;

int searchTarget(vector<vector<int>> matrix, int target, int r, int c){
    int rro = r - 1;
    int rco = 0;
    while(rro > -1 && rco < c - 1){
        if(matrix[rro][rco] == target){
            return 1;
        }
        else if(target < matrix[rro][rco]){
            rro -= 1;
        }
        else{
            rco += 1;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> matrix;
    int r, c, target;
    cin>>r>>c;
    for(int i = 0; i < r; i++){
        vector<int> rows;
        for(int j = 0; j < c; j++){
            int x;
            cin>>x;
            rows.push_back(x);
        }
        matrix.push_back(rows);
    }
    cin>>target;
    cout<<searchTarget(matrix, target, r, c);
    return 0;
}