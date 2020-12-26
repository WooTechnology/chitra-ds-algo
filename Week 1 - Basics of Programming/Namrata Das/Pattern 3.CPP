/*
Take N (number of rows), print the following pattern (for N = 4).
                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4

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
ll n,i,j,k=0,c=1;
cin>>n;
ll m=n*2;
for(i=1;i<=n;i++)
{
c=1;
for(j=1;j<m;j++)
{
if(j>=n+1-i&&j<=m-1-n+i)
{
if(c<=i)
{
k++;
cout<<k;
}
else
{
k--;
cout<<k;
}
c++;
}
else
cout<<" ";
}
cout<<"\n";
}
return 0;
}



