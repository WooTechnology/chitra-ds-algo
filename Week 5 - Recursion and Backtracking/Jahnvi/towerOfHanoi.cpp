#include <iostream> 

using namespace std;

void towerofhanoi(int n, char from_rod, char to_rod, char help){
	if(n == 1) 
	{
	 cout<<"Move disk 1 from "<<from_rod<<" to "<<to_rod<<endl;
	 return;
    }
	
	towerofhanoi(n-1, from_rod, help, to_rod);
	cout<<"Move disk "<<n <<" from "<< from_rod<<" to "<<to_rod<<endl;
	
	towerofhanoi(n-1, help, to_rod, from_rod);
	
} 

int main(){
	int n;
	cin>>n;
	towerofhanoi(n, 'A', 'C','B');
	return 0;
}




