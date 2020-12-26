/*
 Take N (number of rows), print the following pattern (for N = 5)
1   
2 2 
3 0 3
4 0 0 4
5 0 0 0 5
*/
#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846
#define MOD 1000000007
#define test long long t;cin>>t;while(t--)
typedef long long ll;
typedef string S;
typedef float F;
typedef double D;
int main() 
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll i,j,n;
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i==1)
cout<<i;
else if(i==2)
cout<<i;
else
{
if(j==1||j==i)
cout<<i;
else
cout<<0;
}
}
cout<<"\n";
}
return 0;
}




