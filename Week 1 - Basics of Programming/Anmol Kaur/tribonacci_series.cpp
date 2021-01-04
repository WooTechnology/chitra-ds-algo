int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout<<"Enter the number of terms\n";
    int n;
    cin>>n;
    int a=0,b=0,c=1;
    if (n < 3) return 0;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i = 1; i<= n-3; i++){
        int d = a + b + c;
        cout<<d<<" ";
        a = b;
        b = c;
        c = d;
    }
    return 0;
}

// The Tribonacci sequence Tn is defined as follows: 
// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
// Given n, return the value of Tn.

class Solution {
public:
    int tribonacci(int n) {
       if (n==0 || n<0) return 0;
        if(n==2 || n==1 ) return 1;
        int T0 = 0, T1 = 1, T2=1;
        long long int Tn;
        for(int i =0; i<n-2; i++){
            Tn = T0 + T1 + T2;
            T0 = T1; T1 = T2; T2=Tn;
        }
        return Tn;
    }
};