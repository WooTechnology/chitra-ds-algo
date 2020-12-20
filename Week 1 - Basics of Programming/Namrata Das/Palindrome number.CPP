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
/*S s=to_string(n);
S s1=s;
reverse(s.begin(),s.end());
if(s1==s)
cout<<n<<" is a palindrome number.";
else
cout<<n<<" is not a palindrome number.";*/
ll N=n,d,r=0;
while(n>0)
{
d=n%10;
r=10*r+d;
n/=10;
}
if(r==N)
cout<<N<<" is a palindrome number.";
else
cout<<N<<" is not a palindrome number.";
return 0;
}



