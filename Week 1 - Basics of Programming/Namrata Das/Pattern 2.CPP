/*
Take N (number of rows), print the following pattern (for N = 4).
                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1

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
ll n,i,j;
cin>>n;
ll m=n*2;
for(i=1;i<=n;i++)
{
for(j=1;j<m;j++)
{
if(j<=i)
cout<<j;
else if(j>=m-i)
cout<<m-j;
else
cout<<" ";
}
cout<<"\n";
}
return 0;
}



