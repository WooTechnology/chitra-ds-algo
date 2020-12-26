#include<iostream>
using namespace std;

int func(int n){
    int mask = 1,count = 0;
    while(n){
        if(n & mask)
            return count;
        else{
            n = n >> 1;
            count++;
        }
    }
    return count;
}
int main()
{
    int a;
    cin>>a;
    cout<<func(a);
    return 0;
}