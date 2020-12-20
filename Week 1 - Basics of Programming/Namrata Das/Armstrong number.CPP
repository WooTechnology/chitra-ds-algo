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
ll n;
cin>>n;
ll N=n,d,sum=0;
while(n>0)
{
d=n%10;
sum+=pow(d,3);
n/=10;
}
if(sum==N)
cout<<N<<" is a armstrong number.";
else
cout<<N<<" is not a armstrong number.";
return 0;
}



