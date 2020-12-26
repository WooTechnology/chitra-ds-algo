/*
 Take as input N, an odd number(>=5) Print the following pattern for N = 7
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

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
for(j=1;j<=n;j++)
{
if(i==(n/2+1))
cout<<"*";
else if(j==(n/2+1))
cout<<"*";
else if(i<=n/2&&j==1||i>n/2+1&&j==n)
cout<<"*";
else if(j<=n/2&&i==n||j>n/2+1&&i==1)
cout<<"*";
else
cout<<" ";
}
cout<<"\n";
}
return 0;
}




