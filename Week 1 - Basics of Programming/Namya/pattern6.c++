#include<bits/stdc++.h>
/*To print the pattern
5         5
54       45
543     345
5432   2345
54321 12345
54321012345
54321 12345 
5432   2345
543     345 
54       45 
5         5 
*/
using namespace std;
int main(){
    int n;
    cin>>n;
    int sp;
    int s = 0;
    for(int i = n; i >= 0; i--){
        for(int j = n; j >= i; j--){
            cout<<j;
        }
        sp = (n - s - 1) * 2 + 1;
        for(int p = sp; p > 0; p--){
            cout<<" ";
        }
        s += 1;
        int q;
        if (i == 0){
            q = i + 1;
        }
        else{
            q = i;
        }
       
        for(; q <= n ; q++){
            cout<<q;
        }
        cout<<endl;
    }
    sp = 1;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<j;
        }
        for(int s = 0; s < sp; s++){
            cout<<" ";
        }
        sp += 2;
        for(int y = i; y <= n; y++){
            cout<<y;
        }
        cout<<endl;
    }
    return 0;
}