#include<iostream>
using namespace std;
/*To print the pattern
        1
       232
      34543
     4567654 
 */
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        int upperLimit = i - 1;
        int s = n - i;
        while(s--){
            cout<<" ";
        }
        for(int j = i; j <= i + upperLimit; j++){
            cout<<j;
        }
        for(int k =  i + upperLimit - 1; k >= i; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}