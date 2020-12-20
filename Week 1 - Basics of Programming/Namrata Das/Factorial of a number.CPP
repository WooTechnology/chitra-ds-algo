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
ll n,i,f=1;
cin>>n;
for(i=1;i<=n;i++)
f*=i;
cout<<"Factorial of "<<n<<" is: "<<f;
return 0;
}