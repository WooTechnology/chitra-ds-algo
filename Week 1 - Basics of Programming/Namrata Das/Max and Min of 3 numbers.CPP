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
ll a,b,c;
cout<<"Enter 3 numbers:\n";
cin>>a>>b>>c;
cout<<"Minimum number is: "<<min({a,b,c})<<"\n";
cout<<"Maximum number is: "<<max({a,b,c})<<"\n";
return 0;
}