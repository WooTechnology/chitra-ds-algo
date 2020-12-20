/*
Check if a number is a power of 2 or not in O(1).
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
bool power_of_2(ll n)
{
if((n&(n-1))==0)
return 1;
else
return 0;
}
int main() 
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n;
cin>>n;
if(power_of_2(n))
cout<<n<<" is a power of 2.";
else
cout<<n<<" is not a power of 2.";
return 0;
}



