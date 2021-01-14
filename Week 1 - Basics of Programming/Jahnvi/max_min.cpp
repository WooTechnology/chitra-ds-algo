#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c) cout<<a <<" is max "<<endl;
	else if(b>a && b>c) cout<<b <<" is max "<<endl;
	else if (c>a && c>b) cout<<c <<" is max "<<endl;
	else cout<<"No max "<<endl;
	
	if(a<b && a<c) cout<<a <<" is min "<<endl;
	else if(b<a && b<c) cout<<b <<" is min "<<endl;
	else if (c<a && c<b) cout<<c <<" is min "<<endl;
	else cout<<"No min "<<endl;
	
	return 0;
}
