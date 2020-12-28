#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"Min: "<<min(a,min(b,c))<<"\nMax: "<<max(a,max(b,c));
	return 0;
}