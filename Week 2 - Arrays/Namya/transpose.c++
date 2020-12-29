#include<bits/stdc++.h>
using namespace std;
//take transpose of the matrix, either reverse rows or columns
int main(){
    //vector<vector<int>> matrix;
    int r, c;
    cin>>r>>c;
    int matrix[r][c];
    int transpose[c][r];
    for(int i = 0; i < r; i++){
        vector<int> r;
        for(int j = 0; j < c; j++){
            int x;
            cin>>x; 
            matrix[i][j] = x;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}