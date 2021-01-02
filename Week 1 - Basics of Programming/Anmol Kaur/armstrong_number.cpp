//space : O(1)
//time : O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int temp,sum=0,n,d;
	cin>>n;
	int num = n;
	d = floor(log10(n)+1); // returns total number of digits
        while(n){
            temp = n % 10;
            sum += pow(temp,d);
            n = n/10;
        }
        num==sum? cout<<"\nYes":cout<<"\nNo";
	return 0;
}


