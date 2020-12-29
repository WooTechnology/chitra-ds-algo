#include<bits/stdc++.h>
#define pb push_back
using namespace std;
//logic is simple, all u have to do is use 4 arrays to store max/min till that point from both sides and compuet
/*u have 4 combinations lmax rmax
                        lmax rmin
                        lmin rmin
                        lmin rmax
                        get max of these pdts respectively
*/
int main(){
    vector<int> a = {-10, -10, 5, 2};
    vector<int> rmax, rmin, lmax, lmin;
    lmin.push_back(a[0]);
    lmax.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        lmin.pb(min(a[i], lmin[lmin.size() - 1]));
        lmax.pb(max(a[i], lmax[lmax.size() - 1]));
    }
    rmin.pb(a[a.size() - 1]);
    rmax.pb(a[a.size() - 1]);
    for(int i = a.size() - 2; i >= 0; i--){
        rmin.pb(min(a[i], rmin[rmin.size() - 1]));
        rmax.pb(max(a[i], rmax[rmax.size() - 1]));
    }
    reverse(rmin.begin(), rmin.end());
    reverse(rmax.begin(), rmax.end());
    int max1, max2, max_product = INT_MIN;
    for (int i = 1; i < a.size() - 1; i++)
	{
		int max1 = max(a[i] * lmax[i] * rmax[i],
					a[i] * lmin[i] * rmin[i]);

		int max2 = max(a[i] * lmax[i] * rmin[i],
					a[i] * lmin[i] * rmin[i]);

		max_product = max(max_product, max(max1, max2));
	}

    cout<<max_product;
    return 0;
}