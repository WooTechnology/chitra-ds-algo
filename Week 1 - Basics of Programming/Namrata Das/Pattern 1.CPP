/*
 Given N, print patterns upto N lines.For eg For N=6 , the following pattern will be printed.
1
11
111
1001
11111
100001
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
if(i==1||i==2)
cout<<1;
else if(i%2!=0)
cout<<1;
else
{
if(j==1||j==i)
cout<<1;
else
cout<<0;
}
}
cout<<"\n";
}
return 0;
}




