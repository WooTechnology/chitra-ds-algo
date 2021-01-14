#include<iostream>
#include<string>

using namespace std;

int main(){
int n;
cin>>n;
sstring str;
str= to_str(n);
	for(int i=0;i<str.length();i++){
		int start=0, end=str.length()-1;
		if(start!=end) cout<<"Not palindrome"<<endl;
		start++;
		end--;
		}
		cout<<"Palindrome"<<endl;
}
