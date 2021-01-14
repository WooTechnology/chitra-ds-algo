#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int original=n;
    int reverse = 0;
    int d;
    while(n!=0){
        d= n%10;
        reverse=reverse*10+d;
        n= n/10;
    }
    cout<<"Original number "<<original<<endl;
    cout<<"Reverse number "<<reverse<<endl;
    return 0;
}

