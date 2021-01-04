// two efficient ways to calculate number of digits
// floor(log10(n)+1) -> first taking floor of log of number + 1
// to_string(n) -> second converting integer to string

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n; cin>>n;
	int d_floor= 0; string d_string;
	d_floor = floor(log10(n)+1);
	d_string = to_string(n);
	cout<<d_floor<<" "<<d_string.size();
	return 0;
}