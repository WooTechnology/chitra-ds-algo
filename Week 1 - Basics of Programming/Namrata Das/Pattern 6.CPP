/*
Take N as input. For a value of N=5, we wish to draw the following pattern :
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5

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
ll n,i,j,k=0,c=0;
cin>>n;
ll m=n*2;
for(i=1;i<=m+1;i++)
{
if(i>=n+2||k==1)
{
if(i==2)
i--;
else
i-=2;k=1;
}
for(j=1;j<=m+1;j++)
{
if(j<=i)
cout<<n+1-j;
else if(j>=m+2-i)
cout<<j-n-1;
else
cout<<" ";
}
cout<<"\n";
c++;
if(c==m+1)
break;
}
return 0;
}



